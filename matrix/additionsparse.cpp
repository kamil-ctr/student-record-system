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
    sparse*add(sparse*A,sparse*B){
        if(A->m!=B->m||A->n!=B->n){
            cout<<"matrix element do not match"<<endl;
        }
        sparse*c=new sparse(A->m,A->n,A->num+B->num);
        int i=0,j=0,k=0;
        
        while (i < A->num && j < B->num) {
            if (A->e[i].row < B->e[j].row || 
                (A->e[i].row == B->e[j].row && A->e[i].col < B->e[j].col)) {
                c->e[k++] = A->e[i++];
            } 
            else if (B->e[j].row < A->e[i].row || 
                     (B->e[j].row == A->e[i].row && B->e[j].col < A->e[i].col)) {
                c->e[k++] = B->e[j++];
            } 
            else {
                c->e[k] = A->e[i];
                c->e[k++].value += B->e[j++].value;
                i++;
            }
        }
        while(i<A->num){c->e[k++]=A->e[i++];}
        while(j<B->num){c->e[k++]=B->e[j++];}
        c->num=k;
        return c;

       
    }
    ~sparse(){
        delete []e;
    }

};
int main(){
    int a,b,num1,num2;
   cout<<"enter the dimension of sparse matrix 1:";
   cin>>a>>b;
   cout<<"enter the number of non zero elements in matrix 1:";
   cin>>num1;
   sparse *A=new sparse(a,b,num1);
   A->input();

   cout<<"enter the number of non zero elements in matrix 2:";
   cin>>num2;
   sparse* B=new sparse(a,b,num2);
   B->input();

   sparse*c=A->add(A,B);
   c->display();

   delete A;
   delete B;
   return 0;
}