#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    //C++11之前的初始化方法,仍然可以使用
    int x = 0;
    int y(2);
    char c('a');
    int arr[] = {1,2,3};
    char s[] = "hello";
    cout<<sizeof(s)<<endl;
    cout<<strlen(s)<<endl;
    //C++11之后的初始化方法
    // Direct list initialization 直接列表初始化
    int x1{}; // x is 0; 
    int y1{ 1 }; // y is 1; 
    /* Array initialization */ 
    int array1[]{ 1,2,3 }; 
    char s1[ 3 ] { 'o', 'k' }; 
    char s3[]{ "Hello" };     
    //拷贝列表初始化
    /* Variable initialization */ 
    int z = { 2 }; 
     /* Array initialization */ 
    int array2[] = { 4,5,6 }; 
    char s2[] = { 'y','e','s' }; 
    char s4[] = { "World" };
    //不等价：
    char s5[] = "Aloha";
    char s6[] = {'A','l','o','h','a'};
    cout<<sizeof(s5)<<endl;//输出6
    cout<<sizeof(s6)<<endl;//输出5
    
    cin.get();
    return 0;
}