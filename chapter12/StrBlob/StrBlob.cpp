#include<iostream>
#include<memory>
#include<vector>
#include<string>
using namespace std;

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;

private:
    shared_ptr<vector<string>>data;
    void check(size_type i,const string&msg) const{ 
        if(i>=data->size()){
            throw out_of_range(msg);
        }
    }
public:
    //拷贝列表中的值来初始化vector中的元素
    StrBlob(initializer_list<string>li):data(make_shared<vector<string>>(li)){}
    StrBlob(/* args */);
    ~StrBlob();
    size_type size(){ return data->size(); }//通过智能指针来调用容器成员函数
    void push_back(const string&t){ data->push_back(t); }
    void pop_back()
    {
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }
    string& back()
    {
        check(0,"back on empty StrBlob");
        return data->back();
    }
    string& front()
    {
        check(0,"front on empty StrBlob");
        return data->front();
    }
    //非常量版本的函数无法被常量对象调用，所以我们需要针对front，back两函数做const重载
    string& back() const
    {
        check(0,"back on empty StrBlob");
        return data->back();
    }
    string& front() const
    {
        check(0,"front on empty StrBlob");
        return data->front();
    }
    //注意const成员函数不能调用非const函数
};

StrBlob::StrBlob(/* args */):data(make_shared<vector<string>>())   //分配一个空vector
{
}

StrBlob::~StrBlob()
{
}


int main()
{
    StrBlob b1;
    StrBlob b2 = {"a","an","the"};
    b1 = b2;
    b2.push_back("about");
    cout<<b2.size()<<" "<<b1.size()<<endl;
    const StrBlob b3 = b1;
    cout<<b3.front()<<" "<<b3.back()<<endl;
    system("pause");
    return 0;
}