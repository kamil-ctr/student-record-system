#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="hello world";
    string::iterator a;
    int count=0;
    a=s1.begin();
    for(a=s1.begin();a!=s1.end();a++)
    {
        count++;
    }
    cout<<count;

}