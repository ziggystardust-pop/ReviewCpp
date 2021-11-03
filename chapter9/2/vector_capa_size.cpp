#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
    vector<int>ivec;
    cout<<ivec.size()<<" "<<ivec.capacity()<<endl;
    for(vector<int>::size_type ix = 0;ix!=24;ix++)
    {
        ivec.push_back(ix);
    }
    cout<<ivec.size()<<" "<<ivec.capacity()<<endl;
    ivec.reserve(50);
    cout<<ivec.size()<<" "<<ivec.capacity()<<endl;
    while (ivec.size()!=ivec.capacity())
    {
        ivec.push_back(0);
    }
    
    ivec.push_back(51);
    cout<<ivec.size()<<" "<<ivec.capacity()<<endl;
    ivec.shrink_to_fit();
    cout<<ivec.size()<<" "<<ivec.capacity()<<endl;
    
    system("pause");
    return 0;
}



#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<list>
#include<forward_list>
using namespace std;
int main()
{

    
    system("pause");
}