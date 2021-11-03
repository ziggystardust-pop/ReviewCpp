#include<iostream>
using namespace std;

namespace myspace
{
    int c = 0;
    int main()
    {
        cout<<"hello"<<endl;
        return 0;
    }
}

int main()
{
    cout<<myspace::c<<endl;
    cout<<"hello"<<endl;
    system("pause");
    return 0;
}