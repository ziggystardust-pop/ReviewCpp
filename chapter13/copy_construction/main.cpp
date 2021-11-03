
#include"Square.h"
#include<iostream>
using namespace std;
int Square::numberOfObjects = 0;//静态成员初始化
int main()
{
    //一次输出每次的对象个数
    Square s1(10.0);
    cout<<Square::getObjectNum()<<endl;
    Square s2{s1};
    cout<<Square::getObjectNum()<<endl;
        //将s1传递给拷贝构造函数，创建一个匿名对象，放在堆区，并将匿名对象的地址存在指针中
    Square *s3 = new Square{s1};
    cout<<Square::getObjectNum()<<endl;
    system("pause");
    return 0;
}