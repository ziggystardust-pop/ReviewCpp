#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

// struct PersonInfo
// {
//     string name;
//     vector<string>phones;
// };


int main()
{
    // ofstream out1,out2;
    // out1 = out2;//不能队流对象赋值
    // ofstream print(ofstream);//不能拷贝
    // out2 = print(out2);//不能拷贝流对象
    // int d;
    // while(cin>>d)
    /*
    8.11
    string line,word;
    vector<PersonInfo>people;
    while(getline(cin,line))
    {
        PersonInfo info;
        istringstream record(line);
        record>>info.name;
        while(record>>word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    */

    // 8.10
    ifstream in("D:\\cpp\\c++\\chapter8\\data.txt");
    if(!in)
    {
        cerr<<"无法打开文件"<<endl;
        return -1;
    }
    string line;
    vector<string>words;
    while(getline(in,line))
    {
        words.push_back(line);
    }
    in.close();
    vector<string>::const_iterator it = words.begin();
    while(it!=words.end())
    {
        istringstream line_str(*it);
        string word;
        while(line_str>>word)
        {
            cout<<word<<" "; 
        }
        cout<<endl;
        ++it;
    }
    system("pause");
    return 0;
}