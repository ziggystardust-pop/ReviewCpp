#include<iostream>
#include<string>
using namespace std;


int main(){

    string s = ".123";
    cout<<stod(s);
    //而且遇到未定义的行为就啥也不做
    // 比如传入s = "/123"

    getchar();
    return 0;
}