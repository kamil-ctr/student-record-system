#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="Kamil ";
    string b="Iram";
    cout<<a.length()<<endl;
    a.resize(50);
    cout<<a.capacity()<<endl;
    cout<<a.max_size()<<endl;
    a.clear();
    cout<<a<<endl;
    cout<<a.empty()<<endl;
    a.append("Kamil");
    cout<<a<<endl;
    a.insert(5," Love Iram");
    cout<<a<<endl;
    a.swap(b);
    cout<<a<<endl;
}