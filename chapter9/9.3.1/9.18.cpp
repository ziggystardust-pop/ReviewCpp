#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<list>

using namespace std;


int main()
{
    // deque<string> d;
    // string str;
    // while(cin>>str&&str!="\r\n")
    // {
    //     d.push_back(str);
    // }
    // for(auto it = d.begin();it!=d.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    //使用list完成9.18几乎与deque无差异

    //9.20
    // 对于奇数偶数的判断：
    // *it&1等价于%2运算，&1：查看最低位，1则为奇数，0则为偶数
    list<int>li2 = {1,2,3,4,5,6,7};
    deque<int>odd_d,even_d;

    for(auto it = li2.begin();it!=li2.end();it++)
    {
        if(*it&1)
        {
            odd_d.push_back(*it);
        }
        else{
            even_d.push_back(*it);
        }
    }

    //insert将元素插入到iter指向位置之前的位置
    // 返回指向此元素的迭代器
    //性能很差，并且顺序与输入相反
    //vector为空时，begin()==end()，所以初始化为iter为首部或尾部都一样
    string word;
    vector<string>svec;
    auto iter = svec.begin();
    while (cin>>word)
    {
        iter = svec.insert(iter,word);
    }
    for(auto iter = svec.begin();iter!=svec.end();iter++)
    {
        cout<<*iter<<" ";
    }
    //9.22
    // 错误：insert返回的是插入元素的迭代器
    // iter没有++所以无法向mid推进
    // 且向iv插入元素，iter，mid都已经失效了

    system("pause");
    return 0;
}