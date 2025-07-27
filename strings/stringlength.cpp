#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="welcome";
    int count=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        count=count+1;
    }
    cout<<count<<endl;
    return 0;

}