#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
using namespace std;

int main()
{

    //9.27
    forward_list<int>f = {1,2,3,4,45,6,7};
    auto pre = f.before_begin();
    auto curr = f.begin();
    while(curr!=f.end())
    {
        if(*curr%2)
        {
            curr = f.erase_after(pre);
        }
        else{
            pre = curr;
            curr++;
        }
    }
    system("pause");
    return 0;
}