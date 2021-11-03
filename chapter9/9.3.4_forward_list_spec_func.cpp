#include<iostream>
#include<list>
#include<forward_list>
using namespace std;


// 9.28

void insert_forward_list(forward_list<string> &strlist,string str1,string str2){
    auto curr = strlist.begin();
    auto pre = strlist.before_begin();
    while(curr!=strlist.end()){
        if(*curr==str1){
             strlist.insert_after(curr,str2);
            return;
        }
        pre = curr;
        curr++;

    }
    strlist.insert_after(pre,str2);


}



int main()
{
    // 为了删除elem3，应该使用指向elem2的迭代器调用erase_after
    // forward_list定义了before_begin()
    // 返回指向链表首元素之前不存在元素的迭代器，此迭代器不能解引用
    // 删除forward_list中的元素
    forward_list<int>flst = {1,2,3};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr!=flst.end()){
        if(*curr%2==0){
            curr = flst.erase_after(prev);
        }
        else{
            prev = curr;
            curr++;
        }
    }

    return 0;
}