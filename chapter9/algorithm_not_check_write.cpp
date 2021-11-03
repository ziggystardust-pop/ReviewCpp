#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
    // 一些算法接受一个迭代器来指出单独的目的位置
    // 将新值赋予一个序列中的元素
    // 改序列从目的位置迭代器指向的元素开始
    // fill_n
    // fill_n假定写入指定个元素是安全的
    vector<int>vec;
    vec.resize(10);
    fill_n(vec.begin(),vec.size(),10);
    for(auto x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
//错误用法：
    // fill_n(vec.begin(),20,10);vec的size并没有20
    


// back_inserter();
    // 接受一个指向容器的引用，返回一个与该容器绑定的插入迭代器
    // 通过此迭代器赋值时，赋值运算符会调用push_back()将一个具有定制的元素
    // 添加到容器中
    // 例：
    vector<int>vec;
    auto it = back_inserter(vec);
    *it = 90;
    cout<<vec[0]<<endl;



    // copy算法：
    int a[3] = {1,2,3};
    int a2[sizeof(a)/sizeof(*a)];//获取数组长度
    // sizeof(*a) - >类型单位元素大小
    // sizeof(a)数组占用空间大小
    // 目的序列（拷贝目标序列至少包含与原序列一样多的元素）
    // 第三个参数表示目的序列的起始位置
    auto res = copy(begin(a),end(a),a2);
    // res为a2尾元素之后的值
    // copy返回目的位置迭代器的值（迭代器递增后）
    
    system("pause");
    return 0;
}