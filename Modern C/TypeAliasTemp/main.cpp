#include<iostream>

typedef bool (*process)(void*);
using NewProcess = int (*)(void*);

int main()
{
    int a = 10;

    std::cout<<a<<std::endl;

    process fun = [](void *ptr)->bool {
        *static_cast<int*>(ptr) = 100;
        return true;
    };

    fun(&a);
    std::cout<<a<<std::endl;

    NewProcess fun2 = [](void *ptr)->int {
        *static_cast<int*>(ptr) = 200;
        return 0;
    };

    fun2(&a);
    std::cout<<a<<std::endl;

    return 0;
}


