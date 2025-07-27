#include<iostream>
using namespace std;
// double tay(double x,int y){
    
//     double r;
//     static double p=1;
//     if(y==0){
//         return 1;
//     }
//     else{
//         r=tay(x,y-1);
//         p=p*(x/y);
//         return r=r+p;
//         }

// }
// int main(){
//    cout<< tay(2,4);
// }
double taylour(int x,int n){
    static double p=1,z=1;
    double r;
    if(n==0){
        return 1;   
    }
    else{
        r=taylour( x, n-1);
        p=p*x;
        z=z*n;
        return r+p/z;
    }
}
int main(){
    cout<<taylour(2,4);
}