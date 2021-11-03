#include<iostream>
#include<string>

using namespace std;


class Quote
{
private:
    string bookNo;
protected:
    double price = 0.0;
public:
    Quote(/* args */) = default;
    Quote(const string &book,double sales_price):
                            bookNo(book),price(sales_price){}
    
    string isbn(){ return bookNo; }
    //返回给定数量书记的销售总额
    //派生类负责改写并使用不同的计算方法
    virtual double net_price(size_t n) const
    {
        return n*price;
    }
    
    virtual ~Quote() = default;//堆析构函数进行动态绑定

};

class Bulk_quote: public Quote{

public:
    Bulk_quote() = default;
    Bulk_quote(const string&,double,size_t,double);
    double net_price(size_t)const override;//覆盖函数
private:
    size_t min_qty = 0;//适用于折扣的最低购买量
    double discount = 0.0;
};

class Disc_quote:public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const string& book,double price,size_t qty,double disc):
        Quote(book,price),quantity(qty),discount(disc){}
    double net_price(size_t)const = 0;
private:
    size_t quantity = 0;
    double discount = 0.0;
};  

int main()
{
    Quote *itemp = new Quote;
    delete itemp;//调用Quote的析构函数
    itemp = new Bulk_quote;//调用Bulk_quote的析构函数
    delete itemp; 
}