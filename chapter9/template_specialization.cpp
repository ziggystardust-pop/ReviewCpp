#include<iostream>
using namespace std;


template<>
struct hash<char>
{
    size_t operator() (char x)const {return x;}
};

struct hash<int>
{
    size_t operator() (int x)const {return x;}
};

struct hash<long>
{
    size_t operator() (long x)const {return x;}
};

int main()
{
    cout<<hash<long>() (1000);
    

}