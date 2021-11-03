#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    // fstream in;
    // in.open("D:\\cpp\\c++\\chapter8\\data.txt");
    // if(!in){ printf("error\n");return -1; }

    //     string line;
    //     vector<string>words;
    //     while(getline(in,line))
    //     {
    //         words.push_back(line);
    //     }
    //     in.close();
    // for(auto&x:words)
    // {
    //     cout<<x<<endl;
    // }

    // 8.5 读每个单词
    fstream in;
    in.open("D:\\cpp\\c++\\chapter8\\data.txt");
    if(!in){ printf("error\n");return -1; }

        string line;
        vector<string>words;
        while(in>>line)
        {
            words.push_back(line);
        }
        in.close();
    for(auto&x:words)
    {
        cout<<x<<endl;
    }
    system("pause");
    return 0;
}