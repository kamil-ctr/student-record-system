#include<iostream>
using namespace std;

int linear_search(int arr[],int key,int n){

    for(int i=0;i<10;i++){
        if(arr[i]==key){
            return i;
            
        }
        
    }

    cout<<"element not found";
    return -1;
}

// void linear_search(int arr[],int key,int n){
//     for(int i = 0; i < n;i++){
//         if(arr[i] == key){
//             cout << "the index of the key is:" << i;
//             break;
//         }
//     }
//     cout<<"element not found"; 
// }

int main(){  
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=6;
    int kamil = linear_search(arr,key,10);
    cout << kamil ;
}