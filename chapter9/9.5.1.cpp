#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
using namespace std;


int main()
{
    vector<char>vec{'h','e','l','l','o'};
    string str(vec.data(),vec.size());
    //vec.data()返回内存空间首地址
    cout<<str<<endl;

// 高效的处理动态增长的string：
//  先用reserve为string 分配100个字符空间
    // 再用push_back()逐个添加字符到末尾
    int n = 100;
    char c;
    string str2;
    str.reserve(100);
    while(cin>>c){ 
        str2.push_back(c);
    }
    cout<<str2<<endl;

    system("pause");
    return 0;
    
}