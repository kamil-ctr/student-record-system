#include<iostream>
using namespace std;
int main()
{
    int a[2][4]={{2,3,4,5},{5,6,7,8}};
    int b[2][4]={{5,8,7,6},{2,9,3,1}};
    int c[2][4];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}