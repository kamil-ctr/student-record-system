#include<iostream>
using namespace std;

class aray
{
public:
 int*A;
 int size;
 int length;
};
void display(class aray a){
    for(int i=0;i<a.size;i++)
    {
        cout<<a.A[i];
    }
};
int main(){
    aray a;
    cout<<"enter size of an array:"<<endl;
    cin>>a.size;
    a.A=new int[a.size];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<a.size;i++)
    {
        cin>>a.A[i];
    }
    display(a);

}
