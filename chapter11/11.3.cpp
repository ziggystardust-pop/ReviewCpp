#include<iostream>
#include<map>
using namespace std;


int main()
{
    map<string,size_t>word_count;
    string word;
    while(cin>>word)
    {
        auto ret = word_count.insert({word,1});
        if(!ret.second)
        {
            ++ret.first->second;
        }
    }   
    //对于每个word，尝试插入容器，如果插入失败则什么都不会做
    // 如果成功，则计数器为1
    // 如果bool值为false则插入未发生，表示容器中已有word，所以计数器++
    return 0;
}