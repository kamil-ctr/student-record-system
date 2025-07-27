#include<iostream>
using namespace std;
int linear_search(int arr[10],int key)
{
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            
           return i;
        }
        
    }
   

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=6;
    linear_search(arr,key);
}