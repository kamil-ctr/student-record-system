#include<iostream>
using namespace std;

int main(){
    int a[]={3,5,10,4,6};
    int b[]={12,4,7,2,5};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    int c[m+n];
    int size=0;
    for(int i=0;i<m;i++){
        c[size++]=a[i];
    }

    

    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<m;j++)
        {
            if(b[i]==c[j])
            {
                found=true;
                break;
            }
            
        }
        if(!found){
            c[size++]=b[i];
            
        }
    }
    for(int i=0;i<size;i++){
        cout<<c[i]<<" ";
    }
    
        
    
}