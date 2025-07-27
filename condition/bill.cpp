#include<iostream>
using namespace std;
int main()
{
    float amount;
    float discount=0.0;

    cout<<"enter bill amount:";
    cin>>amount;
    
    if(amount>=500)
        {discount=amount*20/100;}

    else if(amount>=100 && amount<500)
       {discount=amount*10/100;}
    
    cout<<"discount is:"<<discount;
    return 0;


}