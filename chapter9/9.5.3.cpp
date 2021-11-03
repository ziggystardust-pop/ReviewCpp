#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
using namespace std;


int main()
{
//     每个搜索操作都返回一个string::size_type值
//     失败则返回string::npos的static成员
//     npos->const string::size_type类型
//     并且初始化为-1

//     npos为一个unsigned类型
//     意味着npos等于任何string 的最大的可能大小


    // 最好不要用int或带符号类型来保存搜索哦函数返回的size_type值


    // (1)最简单的搜索：
    string name("AnnaBelle");
    auto pos = name.find("Anna");
    cout<<pos<<endl;//pos==0

    // 严格区分大小写
    auto pos2 = name.find("anna");
    cout<<pos2<<endl;//

    string s;
    // s.find_first_of(args);//在s中查找args中任何一个字符第一次出现的位置
    // s.find_first_not_of(args);//在s中查第一个不在args中的字符


    

    getchar();

    return 0;

}