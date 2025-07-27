#include <iostream>
using namespace std;
class Array
{
private:
 int *A;
 int size;
 int length;
 void swap(int *x,int *y);
public:
   
    Array(int sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }
    void takeinputs(){
        int n;
        cout<<"enter length of array:\n";
        cin>>n;
        if(n<=size&&n>0){
        cout<<"enter the contents of array:\n";
        for(int i=0;i<n;i++){
            cin>>A[i];
            
        }
        length=n;
        }
        else{cout<<"invalid length\n";}
    }
    
    
    void Display();
    void Append(int x);
    void Insert(int index,int x);
    int Delete(int index);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index,int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void Rearrange();
    Array* Merge(Array a2);
    Array* Union(Array a2);
    Array* Diff(Array a2);
    Array* Inter(Array a2);
};
void Array::Display(){
    cout<<"the elements in array are:\n";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void Array::Append(int x){
    if(length<size)
     A[length++]=x;
}
void Array::swap(int *x,int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;

    }
void Array::Insert(int index,int x){
    if(index<length&&index>=0&&length<size){
    for(int i=length;i>index;i--){
        
      A[i]=A[i-1];
    }
    A[index]=x;
    length++;}
    else
        cout<<"invalid index\n";

}
int Array::Delete(int index){
   if(index>=0&&index<length){
    int x=A[index];
    for(int i=index;i<length-1;i++){
        A[i]=A[i+1];
    }
    length--;
    cout<<"element deleted succesfully\n";
    return x;}
    else
        cout<<"invalid index\n";
        return -1;

}
int Array::LinearSearch(int key){
    for(int i=0;i<length;i++){
        if(A[i]==key){
            cout<<"element found at"<<i<<endl;
            return i;
            
        }
    }
    cout<<"element not found\n";
    return -1;
    
}
int Array::BinarySearch(int key){
    int l=0;
    int h=length-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(A[mid]==key){
            cout<<"element found at index"<<mid<<endl;
            return mid;
        }
        else if(A[mid]<key){
            l=mid+1;
        }
        else
            h=mid-1;
        
    }
    return -1;
}
int Array::Get(int index){
    if(index<length&&index>=0){
        cout<<"element is at:"<<A[index]<<endl;
        return A[index];
    }
    else
        return -1;

}
void Array::Set(int index,int x){
    if(index>=0&&index<length){
        A[index]=x;
    }
    else cout<<"invalid index\n";
}
int Array::Max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"maximum is;"<<max<<endl;
    return max;
}
int Array::Min(){
    int min=A[0];
    for(int i=0;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<"minimum is:"<<min<<endl;
    return min;
}
int Array::Sum(){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+A[i];
    }
    cout<<"sum is:"<<sum<<endl;
    return sum;
}
float Array::Avg(){
    if(length==0){
        cout<<"the array is empty\n";
        return 0.0f;
    }
    return static_cast<float>(Sum())/length;
}
void Array::Reverse(){
    
    for(int i=0,j=length-1;i<j;i++,j--){
        swap(&A[i],&A[j]);
    }
    Display();
    cout<<endl;
}
void Array::Reverse2(){
    int B[length];
    for(int i=length-1,j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    for(int i=0;i<length;i++){
        A[i]=B[i];
    }
    Display();
    cout<<endl;
}
void Array::InsertSort(int x){

    if (length >= size) {
        cout << "Array is full, cannot insert" << endl;
        return;
    }
    int i = length - 1;
    while (i >= 0 && A[i] > x) {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
    Display();
    cout << endl;
}


int Array::isSorted(){
    bool result=true;
    for(int i=0;i<length-1;i++){
        if(A[i]>A[i+1]){
            result=false;
            return 0;
        }
    }
    if(!result){
        cout<<"array is not sorted\n";
    }
    else
        cout<<"array is sorted\n";
        return 1;


}
Array*Array:: Merge(Array a2){
    int i=0,j=0,k=0;
    Array*a4=new Array(size+a2.size);
    while(i<length&&j<a2.length){
        if(A[i]<a2.A[j]){
            a4->A[k++]=A[i++];
        }
        else
            a4->A[k++]=a2.A[j++];
    }
    for(;i<length;i++){
        a4->A[k++]=A[i];
    }
    for(;j<a2.length;j++){
        a4->A[k++]=a2.A[j];
    }
    a4->length=length+a2.length;
    return a4;

}
 Array*Array:: Union(Array a2){
 int i=0,j=0,k=0;
    Array*a4=new Array(size+a2.size);
    while(i<length&&j<a2.length){
        if(A[i]<a2.A[j]){
            a4->A[k++]=A[i++];
        }
        else if(A[i]>a2.A[j])
            a4->A[k++]=a2.A[j++];
        else
            a4->A[k++]=a2.A[j++];
            i++;
    }
    for(;i<length;i++){
        a4->A[k++]=A[i];
    }
    for(;j<a2.length;j++){
        a4->A[k++]=a2.A[j];
    }
    a4->length=k;
    return a4;
 }
 Array*Array::Inter(Array a2){
    int i=0,j=0,k=0;
    Array*a4=new Array(size+a2.size);
    while(i<length&&j<a2.length){
        if(A[i]<a2.A[j]){
            i++;
        }
        else if(A[i]>a2.A[j])
            j++;
        else
            a4->A[k++]=a2.A[j++];
            i++;
    }
   
    a4->length=k;
    return a4;

 }








int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Array arr(size);
    

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Take Inputs\n";
        cout << "2. Display Array\n";
        cout << "3. Append Element\n";
        cout << "4. Insert Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Linear Search\n";
        cout << "7. Binary Search\n";
        cout << "8. Get Element at Index\n";
        cout << "9. Set Element at Index\n";
        cout << "10. Find Maximum\n";
        cout << "11. Find Minimum\n";
        cout << "12. Calculate Sum\n";
        cout << "13. Calculate Average\n";
        cout << "14. Reverse Array (Method 1)\n";
        cout << "15. Reverse Array (Method 2)\n";
        cout << "16. Insert in Sorted Array\n";
        cout << "17. Check if Array is Sorted\n";
        cout << "18. Merge with Another Array\n";
        cout << "19. Union with Another Array\n";
        cout << "20. Intersection with Another Array\n";
        cout << "21. Difference with Another Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                arr.takeinputs();
                break;
            case 2:
                arr.Display();
                break;
            case 3: {
                int x;
                cout << "Enter the element to append: ";
                cin >> x;
                arr.Append(x);
                break;
            }
            case 4: {
                int index, x;
                cout << "Enter the index and element to insert: ";
                cin >> index >> x;
                arr.Insert(index, x);
                break;
            }
            case 5: {
                int index;
                cout << "Enter the index to delete: ";
                cin >> index;
                arr.Delete(index);
                break;
            }
            case 6: {
                int key;
                cout << "Enter the element to search: ";
                cin >> key;
                arr.LinearSearch(key);
                break;
            }
            case 7: {
                int key;
                cout << "Enter the element to search (binary search): ";
                cin >> key;
                arr.BinarySearch(key);
                break;
            }
            case 8: {
                int index;
                cout << "Enter the index to get: ";
                cin >> index;
                arr.Get(index);
                break;
            }
            case 9: {
                int index, x;
                cout << "Enter the index and value to set: ";
                cin >> index >> x;
                arr.Set(index, x);
                break;
            }
            case 10:
                arr.Max();
                break;
            case 11:
                arr.Min();
                break;
            case 12:
                arr.Sum();
                break;
            case 13:
                cout << "Average is: " << arr.Avg() << endl;
                break;
            case 14:
                arr.Reverse();
                break;
            case 15:
                arr.Reverse2();
                break;
            case 16: {
                int x;
                cout << "Enter the element to insert in sorted array: ";
                cin >> x;
                arr.InsertSort(x);
                break;
            }
            case 17:
                arr.isSorted();
                break;
            case 18: {
                cout << "Enter elements for the second array:\n";
                Array arr2(size);
                arr2.takeinputs();
                Array *mergedArray = arr.Merge(arr2);
                cout << "Merged Array:\n";
                mergedArray->Display();
                delete mergedArray;
                break;
            }
            case 19: {
                cout << "Enter elements for the second array:\n";
                Array arr2(size);
                arr2.takeinputs();
                Array *unionArray = arr.Union(arr2);
                cout << "Union Array:\n";
                unionArray->Display();
                delete unionArray;
                break;
            }
            case 20: {
                cout << "Enter elements for the second array:\n";
                Array arr2(size);
                arr2.takeinputs();
                Array *interArray = arr.Inter(arr2);
                cout << "Intersection Array:\n";
                interArray->Display();
                delete interArray;
                break;
            }
            
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}