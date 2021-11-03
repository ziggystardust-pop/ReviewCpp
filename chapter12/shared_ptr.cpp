#include<iostream>
#include<memory>
#include<string>
#include<list>

using namespace std;

int main()
{
    
    string str;
        //默认初始化，保存一个空指针
    shared_ptr<string>p1;//当前为nullptr
    p1 = make_shared<string>(str);
    if(p1&&p1->empty())
    {
        *p1 = "hi";
    }
    cout<<*p1<<endl;
    system("pause");
    return 0;

}