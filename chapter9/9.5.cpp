#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
using namespace std;


int main()
{
    //额外的string操作
    // (1)构造string的其他方法
    char cp[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 5;
    string s(cp,n);//cp指向一个数组，n代表前n个字符
    // 则s为cp指向的数组中n个字符的拷贝
    // string s2(s,pos2);//s2为s从下pos2开始的字符的拷贝
    // string s2(s,pos2,len2);
    // s从下标pos2开始，len2个字符
    // 至多拷贝s.size()-len2个字符


    const char *cp2  = "hello world!!!";//以空字符结束的数组
    char nonull[] = {'h','i'};//不以空字符结束
    // 传递的是一个string时，还可以串一个下标来表示从哪开始拷贝
    // 从一个const char*创建string时，指针指向的数组必须以空字符结束

    // 如果还传入一个计数值，则不必以空字符结尾
    // 如果为传递计数值且数组也没有以空字符结尾
    // 则构造函数的行为时未定义的


    // 从一个string拷贝字符时，可以提供一个可选的开始位置和计数值
    // 开始位置必须小于或等于给定的string的大小
    // 不然会抛出out_of_range异常

    // 从给定位置开始（合法位置），不管传入的len2为多少，标准库最多拷贝到string结尾
    string str = "1234556";
    string str2(str,3,100);//且不会报错
    cout<<str2<<endl;


    // 截取子字符串操作：
    // 返回一个string
    string str3("hello world");
    string str4 = str3.substr(0,5);//5为计数值
    // 从0开始的5个字符
    cout<<str4<<endl;//hello
    cout<<str4.size()<<endl;//5
    cout<<str3.substr(6,10);
    // 一个参数的版本：
    string str5 = str3.substr(6);//从6开始到结束的字符
    // 开始位置超出string大小则抛出out_of_range异常
    // str.substr(pos,n);n的默认值为str.size()-pos

    
    getchar();
}