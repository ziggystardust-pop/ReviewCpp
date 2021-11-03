#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

void endcon(connection *p)
{
    discon(*p);
}

void f1(destination &d)
{
    connection c = conncet(&d);
    shared_ptr<connection>p(&c,endcon);
    //即使忘记调用discon关闭连接，shared_ptr也会正确销毁对象和释放内存
    cout<<endl;
}

//使用lambda表达式重写:

void f1(destination &d)
{
    connection c = conncet(&d);
    shared_ptr<connection>p(&c,[](connection *p){ discon(*p) });
    //即使忘记调用discon关闭连接，shared_ptr也会正确销毁对象和释放内存
    cout<<endl;
}
int main()
{

}