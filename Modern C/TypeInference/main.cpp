#include<iostream>

template<typename T, typename U>
auto add(T x, U y) {
    return (x+y);
}

int main()
{
    auto w = add<int,double>(1,2.3);

    if(std::is_same<decltype(w), double>::value)
        std::cout<< "w is double" <<std::endl;
    return 0;
}
