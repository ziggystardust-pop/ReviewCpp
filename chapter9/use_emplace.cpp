#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    /*
    emplace的三个操作构造而不是拷贝元素
    调用一个emplace成员你、函数时，是将参数传递给元素类型的构造函数
    比如：
    vector<Sales_data>c;
    在末尾构造一个Sales_data对象
    c.emplace_back("999-3993939",39,33.8);
    如果使用push_back()则没有接受三个参数的push_back()
    用法：创建一个临时的对象传递给push_back()
    c.push_back(Sales_data("999-3993939",39,33.8));

    在调用emplace back 时，会在容器管理的内存空间中直接创建对象
     则会创建一个局部临时对象，并将其压入容器中。


    emplace函数的参数根据元素类型而变化，参数必须与元素类型的构造函数相匹配
*/
}