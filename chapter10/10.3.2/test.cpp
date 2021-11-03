#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void add(int a)
{
    auto sum = [a](int b){ return a+b; };
    cout<<sum(1)<<endl;
}

int main()
{
    // 10.14
    auto p = [](int i,int j){ return i+j; };
    cout<<p(1,2)<<endl;
    //10.15
    add(1);

    //10.16
    
    system("pause");
    return 0;
}