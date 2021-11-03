#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;


// 9.51

class Date
{
private:
    /* data */
public:
    Date(/* args */);
    ~Date();
};

Date::Date(/* args */)
{
}

Date::~Date()
{
}












int main()
{
    // 数值转换
    // （1）将整数i转换为字符表示形式
    int i = 42;
    string s = std::to_string(i);
    cout<<s<<endl;
    cout<<stod(s)<<endl;//将字符串转换为浮点数

    // 参数中第一个非康柏符必须时符号（+-）或数字

    // 将字符串转换为浮点数的函数，string参数也可以是.开头
    // 还可以包含e，E来表示指数部分




    // 9.50(1)
    vector<string>vec{"1","2","3"};
    int sum = 0;
    for (size_t i = 0; i < vec.size(); i++)
    { 
        sum+=std::stoi(vec[i]);

    }
    cout<<sum<<endl;
    // (2)
    double sum2 = 0;
    for (size_t i = 0; i < vec.size(); i++)
    { 
        sum2+=std::stod(vec[i]);

    }
    cout<<sum2<<endl;
    getchar();

    return 0;
    
}