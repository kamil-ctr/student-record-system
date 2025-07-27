#include<iostream>
using namespace std;

int main() {
    int arr[]={6,8,13,17,20,25,28,0,35};
    int key,l=0,r=9;
    cout<<"enter key";
    cin>>key;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==key)
        {
            cout<<"element at:"<<mid;
            return 0;
        }else if(key<arr[mid])
        {
            r=mid-1;
        
        }else if(key>arr[mid])
        {
            l=mid+1;
        }

    }
    cout<<"element not found";
    return 0;
}