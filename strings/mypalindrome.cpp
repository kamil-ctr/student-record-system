#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s="MALAYALAM";
   int len=s.length();
   string k="";
   k.resize(len);
   for(int i=0,j=len-1;i<len;i++,j--){

        s[i]=k[j];
   }
   if(s.compare(k)==0)
   {
    cout<<"palindrome"<<endl;
   }
   else
    cout<<"not a palindrome"<<endl;

 

}