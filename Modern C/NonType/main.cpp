#include<iostream>

template<typename T, int BufSize>
class buffer_t
{
public:

    T& alloc() {

        for(int i=0; i<BufSize; i++) {
            if( !slot[i].used )
            {
                slot[i].used = true;
                return slot[i].data;
            }            
        }

        throw std::runtime_error("Buffer is Full");
    }

    void free(T& item) {

        for(auto &[data,used] : slot)
        {
            if((&item == &data) && used)
            {
                data = T{};
                used = false;
                return;
            }
        }
        
        throw std::runtime_error("Buffer is Empty");
    }

    void print() { 
        for(int i=0; i<BufSize; i++) {
            std::cout << slot[i].data << std::endl;
        }
    }

private:
    struct Slot {
        T data{};
        bool used = false;
    };

    Slot slot[BufSize];
};

int main()
{
    buffer_t<int,5> buf;
    int& a = buf.alloc();
    int& b = buf.alloc();
    int& c = buf.alloc();
    int& d = buf.alloc();
    int& e = buf.alloc();

    a=100;
    b=200;
    c=300;
    d=400;
    e=500;


    buf.print();
    
    buf.free(c);

    buf.print();

    buf.free(c);
    
    buf.print();
    return 0;
}
