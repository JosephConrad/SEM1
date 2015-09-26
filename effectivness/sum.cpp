#include <iostream>
#include <map>
#include <vector>
#include <numeric>
using namespace std;
typedef unsigned long long ull;

int main()
{
    // sum of the first 100 000 000 integers
    std::vector<ull> vec(100000001);
    std::iota(vec.begin(), vec.end(), 0); 
    ull zero = 0;
    ull res = std::accumulate(vec.begin(), vec.end(), zero);
    cout<<"sum(100000001)="<<res<<endl;
}