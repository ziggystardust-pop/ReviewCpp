#include<iostream>
using namespace std;

 
typedef struct Stag{
    int a,b,c,d;

}S;

int main()
{
    int x = 0;
    int* p = &x;
    int& r = x;
    int x2 = 5;
    r = x2;
    int& r2 = r;
    cout<<sizeof(r)<<" "<<sizeof(x)<<endl;

    S s;
    S& rs = s;
    cout<<sizeof(s)<<endl;
    cout<<sizeof(rs)<<endl;
    cout<<&s<<endl;
    cout<<&rs<<endl;
    getchar();
    
}