#include <iostream>
#include<algorithm>
#include<numeric>
#include<vector>
struct malej{
    bool operator()(int i, int j){
        return (i>j);
    };
};
int main()
{
    std::vector<int> vect1 = {4,8,1,3,4,6,2,9,0,7};
    for(auto i = vect1.begin(); i!=vect1.end(); ++i){
        std::cout<<*i<<" ";
    }
    std::cout<<"\n";

    std::sort(vect1.begin(), vect1.end(),malej());
    for(auto i = vect1.begin(); i!=vect1.end(); ++i){
        std::cout<<*i<<" ";
    }
    std::cout<<"\n";
    std::cout<<std::count(vect1.begin(),vect1.end(), 7);

}
