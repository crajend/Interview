#include<iostream>

template<typename... T>
void magic(T... args) {
    std::cout << sizeof...(args) << std::endl;
}

int main()
{
    magic();
    magic(1);
    magic(2,"");
    return 0;
}
