#include<iostream>
#include<cassert>
#include<array>
using namespace std;

constexpr int factorial(int n)//在运行时计算
{   
    if(n==0)
    {
        return 1;//制造错误
    }
    else{
        return n*factorial(n-1);
    }
}
//加上constexpr，不一定只能在编译器运行结果，可以在运行时计算

int main()
{

    int x = 3;
    auto f = factorial(x);
    // assert(f==6&&"not 6");//不等于则中断程序
    static_assert(factorial(4)==24,"factorial(4) should be 24");
    array<int,factorial(4)>a;

    cout<<"4! = "<<factorial(4)<<endl;



    // int m = 1;
    // const int cm = m;//此处的cm是编译期常量
    // int a[cm];
    // int m2 = 1;
    // m2++;
    // const int cm2 = m2;
    // int a2[max(cm2,m2)];
    // cout<<"hello"<<endl;
    cin.get();
    return 0;
}