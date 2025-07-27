#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int max=arr[0];
    for(int i=0;i<=6;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    cout<<max<<endl;
}