#include<iostream>
using namespace std;
int fun(int a)
{
    if(a>0)
    {
        return fun(a-1)+a;
    }
    return 0;
}
int main()
{
    int x=20;
    cout<<fun(x)<<endl;
    
}