#include<iostream>
using namespace std;
int sum(int a,int b ,int c=0,int e=0)
{
    return a+b+c+e;

}
int main()
{
    cout<<sum(2,4,5)<<endl;
    cout<<sum(1,2,3,4)<<endl;
    return 0;

} 