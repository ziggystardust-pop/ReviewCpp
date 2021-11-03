#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<string>
using namespace std;

int main()
{
    vector<string> v;
    list<char*>l = {"hello","world","!"};
    //容器类型不同，不能直接使用=赋值运算符赋值
    // v = l;
    //但是元素类型相容，所以可以使用范围赋值
    v.assign(l.begin(),l.end());
    cout<<v.capacity()<<" "<<v.size()<<" "
    <<v[0]<<" "<<v[v.size()-1]<<endl;
    system("pause");
    return 0;

    //输出：
    // 3 3 hello !
}