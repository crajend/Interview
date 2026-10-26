#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    std::vector<int> vec = {1,2,3,4,5};

    std::cout<<"Before : " << std::endl;

    for(std::vector<int>::iterator element = vec.begin(); element != vec.end(); element++)
        std::cout << *element << std::endl;

    if(std::vector<int>::iterator itr = std::find(vec.begin(),vec.end(), 2);itr != vec.end())
        *itr = 7;

    std::cout<<"After : "<<std::endl;

    for(std::vector<int>::iterator element = vec.begin(); element != vec.end(); element++)
        std::cout << *element << std::endl;

    return 0;
}
