#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string,size_t>word_count;//空容器
    set<string> exclude = {"the","yes"};//列表初始化
    //三个元素：
    map<string,string> authors = {{"Joyce","James"},
                                  {"Au","Jane"},
                                  {"Dickens","Charles"}};
    
    //顺序容器值范围初始化set:
    vector<int> ivec;
    for(vector<int>::size_type i = 0;i!=10;i++)
    {
        ivec.push_back(i);
        ivec.push_back(i);
    }
    set<int> iset(ivec.cbegin(),ivec.cend());
    multiset<int> miset(ivec.cbegin(),ivec.cend());
    cout<<ivec.size()<<endl;//20
    cout<<iset.size()<<endl;//10
    cout<<miset.size()<<endl;//20
    
}