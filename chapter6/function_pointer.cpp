
//func,func2都是函数类型
typedef bool func(const string&,const string&);
typedef decltype(length) func2;


//都是指向函数的指针
typedef bool (*func_p)(const string&,const string&);
typedef decltype(length) *func2_p;

void use(const string&&,func2_p);