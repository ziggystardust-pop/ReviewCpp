#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    printf("%d\n",(int)2.5);
//等价写法：
	printf("%d\n",int(2.5));
    cout<<static_cast<double>(1)/2<<endl;//输出0.5（浮点数/整数）
    cout<<1/2<<endl;//输出0
    cout<<static_cast<double>(1/2)<<endl;//输出0
    cin.get();
    return 0;
}