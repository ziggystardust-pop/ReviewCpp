#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
    vector<string>svec;
    // cout<<svec[0];//运行错误
    // cout<<svec.at(0);//抛出异常

    //9.26
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int>vec;
    list<int>l;
    l.assign(ia,ia+11);
    vec.assign(ia,ia+11);
    vector<int>::iterator it = vec.begin();
    while(it!=vec.end())
    {
        if(!(*it&1))
        {
            it = vec.erase(it);
        }
        else{
            it++;
        }
    }
    //list的代码与vector几乎相同
    system("pause");
    return 0;
}