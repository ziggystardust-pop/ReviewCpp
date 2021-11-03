#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string>
#include<deque>
#include<list>
using namespace std;


int main()
{
    //访问元素
    // 每个顺序容器都有一个front成员函数（包括array）
    // forward_list 之外的顺序容器都有back成员函数
    // 分别返回首元素尾元素

    // 不能递减forward_list的迭代器

    // 解引用
    vector<int> nums{1,2,3};
    auto it = *nums.begin();
    it = 6;
    cout<<*nums.begin()<<endl;//输出1


    // 调用front和back之前要确保容器非空


    // 访问元素的操作
    // at和下标操作只适用于string,vector,deque,array
    // 访问成员函数返回的是引用
    // 如果容器是const对象则返回const的引用，非
    // const引用可以用来改变元素的值
    // 与往常一样，如果我们使用auto变量来保存这些函数的返回值，并且希望使用此变量来改变元素的值，必须记得将变量定义为引用类型。
    

    // 编译器不检查下标越界错误


// 9.23
    // c的size为1，例如元素值为3
    // 则val == 3
    // val2 == 3
    // val4 ==4
    // val3 ==3

// 9.24
// 下面的程序会异常终止。因为vector为空，
// 此时用at访问容器的第一个元素会抛出一个 out_of_range 异常
// ，而此程序未捕获异常，因此程序会因异常退出。正确的编程方式是
// ，捕获可能的out_of_range异常，进行相应的处理。
 
// 但对于后三种获取容器首元素的方法,当容器为空时,
// 不会抛出out_of_range异常，而是导致程序直接退出
// （注释掉前几条语句即可看到后面语句的执行效果)。因此，
// 正确的编程方式是，在采用这几种获取容器的方法时，
// 检查下标的合法性（对front和 begin只需检查容器是否为空)，
// 确定没有问题后再获取元素。当然这种方法对at也适用。

    getchar();


    return 0;
}


