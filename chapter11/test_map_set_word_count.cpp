#include<iostream>
#include<string>
#include<set>
#include<map>
using namespace std;

int main()
{
    map<string,size_t> word_count;
    string word;
    while (cin>>word)
    {
        /* code */
        ++word_count[word];
    }
    for(const auto &w:word_count)
    {
        cout<<w.first<<" occurs "<<w.second<<((w.second>1)?"times":"time")<<endl;
    }

    //使用set保存想要忽略的单词，对不在set中发单词统计出现的次数
    set<string>exclude = {"the","The","And","and","or","Or"};
    map<string,size_t> word_count2;
    string word2;
    while (cin>>word2)
    {
        /* code */
        if(exclude.find(word2)==exclude.end())//如果在集合中找不到word2
        ++word_count2[word2];
    }
    for(const auto &w:word_count2)
    {
        cout<<w.first<<" occurs "<<w.second<<((w.second>1)?"times":"time")<<endl;
    }


    system("pause");
    return 0;
    
}