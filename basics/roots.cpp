//Mohammad kamil 23BCE10029
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    float r=(float)-b+sqrt(b*b-4*a*c)/(2*a);
    cout<<"root is:"<<r;


    return 0;
}