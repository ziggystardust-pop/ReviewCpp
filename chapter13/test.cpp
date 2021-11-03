#include<iostream>


using namespace std;


class Empty
{
    Empty(){}
    Empty(const Empty*&rhs){}
    ~Empty(){}
    Empty& operator=(const Empty&rhs){}
};


Sales_data& Sales_data&::operator=(const Sales_data&ths)
{
    bookNo = rhs.bookNo;
    units_sold = rhs.units_sold;
    revenue = rhs.revenue;
    return *this;
}

class X
{
public:
    X(const x&,int i = 1);

};



// int main()
// {


//     return 0;
// }