#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
#include<deque>
#include<list>
using namespace std;

int main(){
// 9.18

    // string str;
    // deque<string>de;
    // while(cin>>str){
    //     de.push_back(str);
    // }

    // for(auto iter = de.begin();iter!=de.end();iter++){
    //     cout<<*iter<<" ";
    // }
    // cout<<endl;


// 9.19
// 和9.18没有太大差别
/*
    string str;
    list<string>l;
    while(cin>>str){
        l.push_back(str);
    }
    for(auto it = l.cbegin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    getchar();
    return 0;
*/
    // 9.20
    deque<int>d1;
    deque<int>d2;
    list<int>l2{1,2,3,4,5,6,7,8};
    auto it = l2.cbegin();
    while(it!=l2.cend()){
        if(*it%2==1){
            d1.push_back(*it);
        }
        else{
            d2.push_back(*it);
        }
        it++;
    }

    for(auto x:d1){
        cout<<x<<" ";
    }
    cout<<endl;
    
    for(auto x:d2){
        cout<<x<<" ";
    }
    cout<<endl;
    

// 9.21
    // 与list的相应操作差别不大
    string str3;
    vector<string>list4;
    auto it2 = list4.begin();
    while(cin>>str3){
        it2 = list4.insert(it2,str3);
    }
    for(auto i = list4.cbegin();i!=list4.cend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    getchar();

// // 9.22
//     iter没有递增操作，无法向中点推进，且iter在insert之后失效
//     insert也使mid失效
}