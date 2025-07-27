#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age<9||age>18)
        cout<<"eligible";
    else   
        cout<<"not eligible";
return 0;
}