#include<iostream>
using namespace std;

class element{
    public:
    int row,col,value;

};
class sparse{
    private:
    int m,n,num;
    element*e;
    public:

    sparse(int i,int j,int x){
        m=i;
        n=j;
        num=x;
        e=new element[num];
    }
    void input(){
        cout<<"enter the elements of the matrix:";
        for(int i=0;i<num;i++){
            cin>>e[i].row>>e[i].col>>e[i].value;
            e[i].row--;
            e[i].col--;
        }
    }
    void display(){
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(k<num&&e[k].row==i&&e[k].col==j)
                {
                    cout<<e[k].value<<" ";
                    k++;
                }
                else
                cout<<"0 ";
            }
            cout<<endl;
        }
    }
    ~sparse(){
        delete []e;
    }

};
int main(){
    int a,b,c;
    cout<<"enter number of rows:";
    cin>>a;
    cout<<"enter noof columns:";
    cin>>b;
    cout<<"enter no of non zero elements:";
    cin>>c;

    sparse s(a,b,c);
    s.input();
    s.display();
}