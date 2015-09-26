#include <iostream>
#include <map>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v {1,2,3};
    vector<int> v2 {1,1,1}; 

    // 1 example - accumulate
    std::vector<ull> vec(100000001);
    std::iota(vec.begin(), vec.end(), 0); 
    ull zero = 0;
    ull res = std::accumulate(vec.begin(), vec.end(), zero);

    // 2 exeample - remove_if
    std::string str2 = "foo\n\t bar\n\n";
    str2.erase(std::remove_if(str2.begin(),  str2.end(), 
                             [](char x){return std::isspace(x);}), str2.end()); 

    // 3 exeample - transform
    transform(v.begin(),v.end(),v2.begin(), [](int i) {return i*i;}); 
}