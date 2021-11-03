#include<iostream>
#include<vector>

using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
    for(;beg!=end;beg++)
    {
        if(*beg==val)
        {
            return beg;
        }
    }
    return end;//搜索失败则返回尾后迭代器
}


int main()
{

}