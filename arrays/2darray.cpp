#include<iostream>
using namespace std;
int main()
{
    int a[2][5]={{2,3},{6,7,8,9,5}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}