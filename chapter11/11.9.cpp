#include<iostream>
#include<list>
#include<map>
#include<fstream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;


//输出单词和对应的行号，行号用list保存
//一个单词可以出现在多个行，单词不区分大小写
string &trans(string &s)
{
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i] = s[i]-'A'+'a';
        }
        else if(s[i] == ',' || s[i] == '.')
        {
            s.erase(i,1);
        }
    }
}
int main(int argc,char* argv[])
{
    ifstream in(argv[1]);
    if(!in)
    {
        cout<<"打开失败"<<endl;
        exit(1);
    }
    map<string,list<int>>word_lineno;
    string line;
    string word;
    int lineno = 0;
    while (getline(in,line))
    {
        /* code */
        lineno++;
        istringstream lin(line);
        while(lin>>word)
        {
            trans(word);
            word_lineno[word].push_back(lineno);
        }

    }
    for(const auto&w:word_lineno){
        cout<<w.first<<"在：";
        for(const auto&i:w.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}