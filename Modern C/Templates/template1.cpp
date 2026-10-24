#include<iostream>
#include<vector>

template<bool T>
class MagicType {
    bool magic = T;
};

int main()
{
    std::vector<MagicType<false>> false_magic;
    std::vector<MagicType<true>> true_magic;

    for(int i=10,j=0; i >= 0 ; i--, j++) {
        bool magic = (i>j);
        
        if(!magic)
            false_magic.push_back(MagicType<false>{});
        else
            true_magic.push_back(MagicType<true>{});
    }
    
        
    return 0;
}
