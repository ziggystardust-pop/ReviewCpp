#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isShorter(const string&a,const string&b)
{   
    return a.size()<b.size();
}

//找到size>=sz的字符串的个数
// 使用lambda表达式
void biggies(vector<string>&words,vector<string>::size_type sz)
{
    elimDups(words);//以字典序排序并去重
    stable_sort(words.begin(),words.end(),isShorter);//以长度排序，长度相同则维持字典序
    //计算数目：
    // 获取一个迭代器，指向第一个满足size()>=sz
    // 打印长度大于等于给定值的单词，每个单词后接一空格
    //返回一个迭代器
    auto wc = find_if(words.begin(),words.end(),[sz](const string&a)
    { return a.size()>=sz; }
    );
    auto count = words.end()-wc;

    for_each(wc,words.end(),[](const string&s){ cout<<s<<endl; });
    cout<<endl;
}

int main()
{

}