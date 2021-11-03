#include<iostream>
#include<vector>
using namespace std;

//改变容器大小

int main()
{
    // array不支持resize

    vector<int>v{1,2,3};
    v.resize(10);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>v2;
    v2.resize(10);
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<endl;
// 1 2 3 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0

// 当前要求大小小于容器原大小，则将后部元素删除
// 大于则将新元素添加到容器后部
    v.resize(15,5);//将5个5添加到v之后
// 如果容器保存的为类类型，则resize添加元素则必须提供初始值或元素类下必须有一个默认构造
// 函数
// 如果resize缩小容器，则指向被删除元素的迭代器、
// 引用和指针都会失效;对vector、string或 deque进行resize
// 可能导致迭代器、指针和引用失效。


// 9.29
// (1)向vec末尾添加75个元素并且值初始化
// (2)删除后90个元素

// 9.30
// 若为类类型则单参数，类类型必须提供一个默认构造函数


    getchar();
}