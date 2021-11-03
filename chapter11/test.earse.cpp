#include<iostream>
#include<map>
using namespace std;

int main()

{
    map<int,int>m;
    for(int i = 0;i<10;i++)
    {
        m[i] = i;
    }
    auto it = m.begin();
    auto it2 = m.begin();
    it2++;
    m.erase(it,it2);//
    //由结果可知，范围删除不包括it2处的元素
    auto p = m.begin();
    while(p!=m.end())
    {
        cout<<p->first<<" "<<p->second<<endl;
        p++;
    }
    map<string,string>authors;
    string search_item;
    for(auto beg = authors.lower_bound(search_item),end
     = authors.upper_bound(search_item);beg!=end;beg++)
     {
         cout<<beg->second<<endl;//打印每本书的题目
     }
    system("pause");
    return 0;
}