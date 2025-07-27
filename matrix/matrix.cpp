#include<iostream>
using namespace std;

class Diagonal{
    private:
    int n;
    int*a;

    public:
    Diagonal(){
        n=2;
        a=new int[2];
    }
    Diagonal(int n){
        this->n=n;
        a=new int[n];
    }
    ~Diagonal(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void Diagonal::set(int i,int j,int x){
    if(i==j){
        a[i-1]=x;
    }
}
int Diagonal::get(int i,int j){
    if(i==j){
        return a[i-1];
    }
    else return 0;
} 
void Diagonal::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<a[i-1]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    
}
class lowerTriangular{
    private:
    int n;
    int*a;

    public:
    lowerTriangular(){
        n=2;
        a=new int[2*(2+1)/2];
    }
    lowerTriangular(int n){
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    ~lowerTriangular(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void lowerTriangular::set(int i,int j,int x){
    if(i>=j){
        a[(i*(i-1)/2)+(j-1)]=x;
    }
}
int lowerTriangular::get(int i,int j){
    if(i>=j){
        return a[(i*(i-1)/2)+(j-1)];
    }
    else return 0;
} 
void lowerTriangular::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[(i*(i-1)/2)+(j-1)]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    
}

class upperTriangular{
    private:
    int n;
    int*a;

    public:
    upperTriangular(){
        n=2;
        a=new int[2*(2+1)/2];
    }
    upperTriangular(int n){
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    ~upperTriangular(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void upperTriangular::set(int i,int j,int x){
    if(i<=j){
        a[(j*(j-1)/2)+(i-1)]=x;
    }
}
int upperTriangular::get(int i,int j){
    if(i<=j){
        return a[(j*(j-1)/2)+(i-1)];
    }
    else return 0;
} 
void upperTriangular::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<a[(j*(j-1)/2)+(i-1)]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    
}
class symmetric{
    private:
    int n;
    int *a;

    public:
    symmetric(int n)
    {
        this->n=n;
        a=new int[n];
    }
    ~symmetric(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void symmetric::set(int i,int j,int x){
    if(i>=j){
        a[(i*(i-1)/2)+(j-1)]=x;
    }
}
int symmetric::get(int i,int j){
    if(i>=j){
        return a[(i*(i-1)/2)+(j-1)];
    }
    else 
    return a[(j*(j-1)/2)+(i-1)];

}
void symmetric:: display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[(i*(i-1)/2)+(j-1)]<<" ";
            }
            else{
                cout<<a[(j*(j-1)/2)+(i-1)]<<" ";
            }
        }
        cout<<endl;

    }
}
class tridiagonal{
    public:
    int n;
    int *a;
    
    public:
    tridiagonal(int n){
        this->n=n;
        a=new int[3*n-2];
    }
    ~tridiagonal(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void tridiagonal::set(int i,int j,int x){
    if(i-j==1){
        a[i-2]=x;
    }
    else if(i-j==0){
        a[i+3]=x;
    }
    else if(i-j==-1){
        a[i+8]=x;
    }
}
int tridiagonal::get(int i,int j){
    if(i-j==1){
        return a[i-2];
    }
    else if(i-j==0){
        return a[i+3];
    }
    else if(i-j==-1){
        return a[i+8];
    }
    else return 0;
}
void tridiagonal::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i-j==1){
                cout<<a[i-2]<<" ";
            }
            else if(i-j==0){
                cout<<a[i+3]<<" ";
            }
            else if(i-j==-1){
                cout<<a[i+8]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
class toeplitz{
    private:
    int n;
    int *a;

    public:
    toeplitz(int n){
        this->n=n;
        a=new int[(2*n)-1];
    }
    ~toeplitz(){
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
void toeplitz::set(int i,int j,int x){
   
    if(i<=j){
        a[j-i]=x;
    }
    else if(i>j){
        a[n+i-j-1]=x;
    }

}
int toeplitz::get(int i,int j){
    if(i<=j){
        return a[j-i];
    }
    else {
        return a[n+i-j-1];
    }

}

void toeplitz::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<get(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int option;
    
   do{cout<<"select on which type of matrix:"<<endl;
    cout<<"1.Diagonam\n"
    <<"2.Lowertringular\n"
    <<"3.Uppertriangular\n"
    <<"4.Symmetric\n"
    <<"5.Tridiagonal\n"
    <<"6.Toeplitz\n"
    <<"7.Exit\n";
   
    cout<<"enter option number:";
    cin>>option;

    switch(option){
   case 1:{     
    int y;
    cout<<"enter the size of diagonal matrix:";
    cin>>y;
    Diagonal d(y);
    cout<<"enter the values of the diagonal matrix:"<<endl;
    int w;
    for(int i=1;i<=y;i++){
        for(int j=1;j<=y;j++){
            cin>>w;
            d.set(i,j,w);
        }
    }
    d.display();
    break;
}

 case 2:{
    int n;
    cout<<"enter the size of lowertriangular matrix:";
    cin>>n;
    lowerTriangular t(n);
    cout<<"enter the values of the lowerTringular matrix:"<<endl;
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            t.set(i,j,x);
        }
    }
    t.display();
    break;}

    case 3:{
    int m;
    cout<<"enter the size of upperTringular matrix:"<<endl;
    cin>>m;
    upperTriangular g(m);
    int y;
    cout<<"enter the values of uppertringular matrix:"<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cin>>y;
            g.set(i,j,y);
        }
    }
    g.display();
    break;}

    case 4:{
    int o;
    cout<<"enter the size of symmetric matrix:"<<endl;
    cin>>o;
    symmetric h(o);
    int z;
    cout<<"enter the values of symmetric matrix:"<<endl;
    for(int i=1;i<=o;i++){
        for(int j=1;j<=o;j++){
            cin>>z;
            h.set(i,j,z);
        }
    }
    h.display();
    break;}

    case 5:{
    int p;
    cout<<"enter the size of tridiagonal matrix:"<<endl;
    cin>>p;
    tridiagonal k(p);
    int b;
    cout<<"enter the values of tridiagonal matrix:"<<endl;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=p;j++){
            cin>>b;
            k.set(i,j,b);
        }
    }
    k.display();
    break;}

    case 6:{
    int x;
    cout<<"enter the size of toeplitz matrix:"<<endl;
    cin>>x;
    toeplitz f(x);
    int u;
    cout<<"enter the values of toeplitz matrix:"<<endl;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            cin>>u;
            if(i==1||j==1){
            f.set(i,j,u);
        }
        }
    }
    f.display();
    break;}

    case 7:{cout<<"exiting program!!!"<<endl;
    break;}

    default:cout<<"invalid choice "<<endl;
}
    }while(option!=7);



}