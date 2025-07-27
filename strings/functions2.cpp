#include<iostream>
using namespace std;
int main(){
    string a="hello";
    char b[10];
    a.copy(b,a.length());
    cout<<b<<endl;
}