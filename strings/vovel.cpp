#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="how Many wOrds";
    string s1="AEIOU";
    string s2="aeiou";
    int vovel=0;
    int consonent=0;
    int words=1;
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]=='A'|s[i]=='E'|s[i]=='I'|s[i]=='O'
        |s[i]=='U'|s[i]=='a'|s[i]=='e'|s[i]=='i'|s[i]=='o'|s[i]=='u')
        {
            vovel++;
        }
        else if(s[i]==' ')
        {
            words++;
        }
        else
        consonent++;
    }
    cout<<"vovel:"<<vovel<<endl;
    cout<<"words:"<<words<<endl; 
    cout<<"consonents:"<<consonent<<endl;
}