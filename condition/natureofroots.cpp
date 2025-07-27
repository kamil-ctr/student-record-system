#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"enter coffiecients:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
       {cout<<"real and equal roots"<<endl;
        cout<<"r1"<<"="<<"r2"<<"="<<-b/(2*a)<<endl;}
    else if(d>0)
       { cout<<"real and unequal roots"<<endl;
        cout<<"r1"<<"="<<(-b+sqrt(d))/(2*a)<<endl;
        cout<<"r2"<<"="<<(-b-sqrt(d)/(2*a))<<endl;}
    else cout<<"imagenary roots";
return 0;
}
