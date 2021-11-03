#pragma once
#include<iostream>
using namespace std;
class Square
{
private:
    double side{1.0};
    static int numberOfObjects;//创建对象的个数
public:
    Square():Square(1.0){}//代理构造
    Square(double side)
    {
        this->side = side;
        numberOfObjects++;
    }
    double getSide(){ return side; }
    void setSide(double side){ this->side = side; }
    double getArea()
    {
        return side*side;
    }
    static int getObjectNum()
    {
        return numberOfObjects;
    }
    //拷贝构造函数，此处将参数声明为const的，防止在函数体中实参被意外修改
    Square(const Square&rhs)
    {
        this->side = rhs.side;
        numberOfObjects++;
        cout<<"Squre(const Squre&)is invoked"<<endl;
    }
    ~Square()
    {
        numberOfObjects--;
    }
};