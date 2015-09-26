#include <iostream>
#include <map>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    // 1 example - Lambda
    auto func = [] () {
        cout << "Hello world\n";
    };
    func();

    // 2 example - First-class member
    map<const char,function<int(int,int)>> tab;
    tab.insert(make_pair('-',[](int a, int b) {
        return a - b;
    }));
    cout << "5-4 = " << tab['-'](5,4) << endl;

    vector<int> v {1,2,3};
    vector<int> v2 {1,1,1};
    vector<string>str {"foo","bar"};

    // 3 example - accumulate
    auto suming = [](int i, int j) {return i + j;};
    int vec[] = {1,2,3,4,5,6};
    int res = std::accumulate(vec, vec+6, 0, suming);
    cout<<"sum(6)="<<res<<endl;

    // 4 exeample - remove_if
    std::string str2 = "foo\n\t bar\n\n";
    str2.erase(std::remove_if(str2.begin(), 
                              str2.end(),
                              [](char x){return std::isspace(x);}),
               str2.end());
    std::cout << str2 << '\n';
    
    // 5 exeample - transform
    transform(v.begin(),v.end(),v2.begin(),
        [](int i) {
            return i*i;
        });
    for (auto itr = v2.cbegin(); itr != v2.cend(); ++itr)   
        cout << *itr << " ";
    cout << endl << endl;
}