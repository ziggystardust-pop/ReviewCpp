#include<iostream>
using namespace std;

constexpr size_t scale(size_t cnt){ return cnt;}


int main()
{
    int a[] = {1,2,3};
    int i = 2;
    cout<<a[scale(2)]<<endl;
    cout<<a[scale(i)]<<endl;
    system("pause");
    
}