#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    std::vector<int> vec = {1,2,3,4,5};

    std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);

    if(itr != vec.end())
        *itr = 3;

    std::vector<int>::iterator itr2 = std::find(vec.begin(), vec.end(), 4);

    if(itr2 != vec.end())
        *itr2 = 7;

    for(std::vector<int>::iterator element = vec.begin(); element != vec.end(); element++)
        std::cout << *element << std::endl;

    return 0;
}
