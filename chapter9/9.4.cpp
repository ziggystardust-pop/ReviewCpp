#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    //capacity返回容器不扩张空间的情况下可以容纳的元素个数

    // reserve告知容器提前准备多少内存空间
    // shrink_to_fit只适用于vector，string。deque
    // capacity和reserve只适用于vector和string

    vector<int>c;
    c.shrink_to_fit();//将capacity缩减为size()相同的大小
    // reserve并不改变容器中元素的数量，它仅影响vector预先分配多大的内存空间。
// ？？？？？？？？？？？？？？？？？？？？？？？

    // vector的实现采用的策略似乎是在每次需要分配新内存空间时将当前容量翻倍。


// capacity不可能小于size
// capacity返回vector分配了多大的内存空间，size是返回元素个数

// 9.37
// 一个链表占用的内存空间总是与它当前保存的元素所需空间相同
// array是固定大小的数组，内存一次性分配


}