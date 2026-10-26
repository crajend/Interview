#include<iostream>

template<typename T, typename...Ts>
auto display(T value, Ts...args) {
    std::cout << value << std::endl;
    (void) std::initializer_list<T> {(
        [&args]{
            std::cout << args << std::endl;
        }(), 
        value)
    ...};
}

int main()
{
    display(10,20,30,40,50);
    return 0;
}
