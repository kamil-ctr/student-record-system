#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=9;
    for(int i=0;i<=9;i++)
    {
        if(arr[i]==key)
        {
            cout<<"element is on:"<<i;
            return 0;
        }

    }
    cout<<"element not found";
    return 0;

}