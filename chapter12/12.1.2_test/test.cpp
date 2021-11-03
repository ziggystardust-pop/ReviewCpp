#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

vector<int>*new_vector(void)
{
    //改变new的方式阻止其在无法分配时抛出异常
    return new(nothrow)vector<int>;
}

//主函数调用了分配函数分配了动态内存，所以由主函数来释放对象

void read_inits(vector<int>*pv)
{
    int v;
    while(cin>>v)
    {
        pv->push_back(v);
    }
}
void print(vector<int>*pv)
{
    for(const auto&v:*pv)
    {
        cout<<v<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>*pv = new_vector();
    if(!pv){
        cout<<"内存不足"<<endl;
        return -1;
    }
    read_inits(pv);
    print(pv);
    delete pv;//pv变为空悬指针
    pv = nullptr;//重置指针值，清楚的指出指针不指向任何对象
    system("pause");
    return 0;
}