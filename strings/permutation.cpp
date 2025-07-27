  #include<iostream>
  using namespace std;
  int a[10]={0};
    char result[10];

  void Permu(char s[],int k){
    
    if(s[k]=='\0'){
        result[k]='\0';
        cout<<result<<endl;
        return;
    }
    else{



    for(int i=0;s[i]!='\0';i++){
        if(a[i]==0){
            result[k]=s[i];
            a[i]=1;
            Permu(s,k+1);
            a[i]=0;
        }
    }
}
  }
  int main(){
    char s[]="abc";
    Permu(s,0);
  }