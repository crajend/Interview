#include<iostream>
#include"foo.h"

int main()
{
    int a=10, b=10;

    [out = std::ref(std::cout << 
        "The result from C code("<< a <<" , "<< b <<") : " << 
        add(a,b) << std::endl)]() {
        out.get();
    }();

    return 0;
}