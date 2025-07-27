#include<iostream>
using namespace std;

int main(){
    int a[]={3,5,10,4,6};
    int b[]={12,4,7,2,5};
    int m=5;
    int n=5;
    int c[10];
    int size=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            if(b[i]==a[j])
            {
                c[size++]=b[i];
                break;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<c[i]<<" ";
    }
}