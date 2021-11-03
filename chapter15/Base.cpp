

#include<iostream>
#include<vector>
class Base
{
    friend class Pal;
public:
    static void statmem();
    void pub_mem();
protected:
    int port_mem;
private:
    char priv_mem;

};
class Derived:public Base
{

    void f(const Derived&);
};
//如果某静态成员是 可访问的，则派生类也可以使用
void Derived::f(const Derived& obj)
{
    Base::statmem();//基类定义了statmem
    Derived::statmem();//继承
    //派生类对象可以访问基类的静态成员
    obj.statmem();
    //通过隐式的this访问
    statmem();
}
class pub_dev:public Base
{
    int f(){ return port_mem; }//正确，派生类可以访问protected成员
    char g(){ return priv_mem; }//错误，private成员对于派生类来说无法访问
};

class pri_dev:private Base
{
    int f(){ return port_mem; }//正确，不受private的影响
        // char g(){ return priv_mem; }//错误，private成员对于派生类来说无法访问
};

class Pal{
public:
	int f(Base b){ return b.port_mem; }//Pal是Base的友元
    int f2(Sneaky s){ return s.j; }//错误Pal不是Sneaky的友元
    //对基类的访问权限由基类本身控制，即使对于派生类的基类部分也是这样
	int f3(Sneaky s){ return s.port_mem; }//正确，Pal为Base的友元
};
//友元关系只对做出声明的类有效，派生类也无效
class D2:public Pal
{
public:
    int mem(Base b)
    {
        return b.port_mem;//错误，友元关系不能继承
    }
};