#include<iostream>

template<typename T0, typename...T>
void display(T0 t0, T...t) {
    std::cout << t0 << std::endl;

    if constexpr (sizeof...(t) > 0)
        display(t...);
}

int main()
{
    display(10, 3.14, "Hello", 'A');
    return 0;
}
