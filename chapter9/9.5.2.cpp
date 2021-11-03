#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
using namespace std;




// replace可以传入一个位置和一个长度
// 也可以传入一个迭代器范围来指定


// insert允许传入下标或一个迭代器，新元素插入到给定迭代器之前的位置

// string中find()返回值是字母在母串中的位置（下标记录），如果没有找到，那么会返回一个特别的标记npos。（返回值可以看成是一个int型的数）

// 9.44

void replace_string(string &s,const string &oldval,const string &newval){
    int p = 0;//用于记录字子串在s中的起始位置
    // s.find()函数返回一个起始位置（下标），如果找不到则返回npos
    while((p = s.find(oldval,p)!=string::npos)){//p代表从下标p开始
        // 这样每次寻找到oldval之后，就会更新p，来达到查找所有子串的目的
        s.replace(p,oldval.size(),newval);//传入一个开始位置，从此开始
        // 删除size()个字符，并插入新字符串newval
        p+=newval.size();//下标调整到新插入内容之后



    }//找到所有的oldval下标起始位置
}



void insert_front_end(string &s,const string &f,const string &e){
    auto iter = s.begin();
    auto iter_f = f.end()-1;
    while(iter_f!=f.begin()-1){
        iter = s.insert(iter,*iter_f);
        iter_f--;
    }

    s.append(e);
}

void insert_fron(string &s,const string &f,const string &e)
{
    s.insert(0," ");
    s.insert(0,f);
    s.insert(s.size()," ");
    s.insert(s.size(),e);
}
int main()
{
    string s = "tho thru tho!";
    // replace_string(s,"thru","through");
// 无法用 "const char [8]" 类型的值初始化 "std::__cxx11::string &" 类型的引用(非常量限定)


    // void replace_string(string &s,const string &oldval,const string &newval){

    replace_string(s,"thru","through");
    cout<<s<<endl;
    string str  ="ziggy";
    insert_front_end(str,"Mr. "," JR.");
    cout<<str<<endl;
// 9.45

    getchar();
    return 0;
    system("pause");

}

//实现前缀插入
void insert_front_end(string &s,const string &f,const string &e){
{
    s.insert(f.begin(),1,' ');
    s.insert(s.begin(),f.begin(),f.end());
    s.append(" ");
    s.append(e);
}

// 只用insert且用位置操作

