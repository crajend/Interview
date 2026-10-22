#include<iostream>
#include<tuple>

std::tuple<int, double, std::string> f()
{
    return std::make_tuple(1, 2.3, "456");
}

int main()
{
    auto [x,y,z] = f();

    std::cout << x << " , " << y << " , " << z << std::endl;

    std::map<std::string, int> scores{ {"Alice", 80}, {"Bob", 90}};

    for(auto &[name, score] : scores) {
        std::cout << name << " : " << score << std::endl;
    }
    
    return 0;
}
