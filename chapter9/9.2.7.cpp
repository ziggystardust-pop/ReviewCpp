#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;


int main()
{
    vector<int>v1 = {1,3,5,7,9,12};
    vector<int>v2 = {1,3,9};
    vector<int>v3 = {1,3,5,7};
    vector<int>v4 = {1,3,5,7,9,12};
    v1<v2;//两者都不是对方的前缀子序列，所以比较第一个不相等的元素,true
    v1<v3;//所有元素都相等，但是数目v1多,false
    v1==v4;//true
    v1==v2;//数目,false

    vector<string>v;
    v.insert(v.end(),10,"Anna");//末尾插入十个
    vector<string> str = {"quasi","simba","frollo","scar"};
    list<string> slist;
    slist.insert(slist.begin(),v.end()-2,v.end());//插入v的最后两个元素到开头位置
    slist.insert(slist.begin(),{"these"});//列表插入
    list<string>lst;
    auto iter = lst.begin();
    string word;
    while(cin>>word){
        iter = lst.insert(iter,word);
    }   

    system("pause");
    return 0;
}