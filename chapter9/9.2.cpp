#include<iostream>
#include<vector>

using namespace std;


class noDefault
{
    noDefault(int i){

    }

};

int main()
{
    vector<noDefault>v1(10,init);//正确，提供了元素初始化器
    vector<noDefault>v2(10);//错误必须提供一个初始化器，因为此类型没有默认构造函数
}