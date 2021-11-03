//考察三种初始化方式
int main()
{
    string s;
    int v;
    vector<pair<string,int>>data;
    while(cin>>s&&cin>>v)
    {
        data.push_back(pair<string,int>(s,v));
    }
    //第二种：
    data.push_back({s,v});
    //第三种：
    data.push_back(make_pair(s,v));

}