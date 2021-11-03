#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
using namespace std;
int main()
{

    vector<char>v = {'h','e','l','l','o'};
    string str(v.data(),v.size());
    cout<<str<<endl;
    system("pause");
}