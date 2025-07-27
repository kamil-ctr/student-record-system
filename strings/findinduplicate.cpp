#include<iostream>
using namespace std;

int main(){
    char a[]="finding";
    int h[26]={0};

    for(int i=0;a[i]!='\0';i++){
        h[a[i]-97]++;
    }
    for(int i=0;i<=25;i++){
        if(h[i]>1){
            cout<<char(i+97)<<":";
            cout<<h[i]<<endl;
        }
    }

}