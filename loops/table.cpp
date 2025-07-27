#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int c;
    for(int i=1;i<=10;i++)
    {
        c=n*i;
        cout<<n<<"X"<<i<<"="<<c<<endl;
    }
    return 0;
}