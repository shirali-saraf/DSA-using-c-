#include<iostream>
using namespace std;

void insert_beg(int arr[],int n){
    int num;
    cout<<"enter number you want to insert : ";
    cin>>num;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    n++;
    cout<<"array after insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insert_end(int arr[],int n){
    int num;
    cout<<"enter number you want to insert : ";
    cin>>num;
    arr[n]=num;
    n++;
    cout<<"array after insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insert_pos(int arr[],int n){
    int num,pos;
    cout<<"enter number you want to insert : ";
    cin>>num;
    cout<<"enter position : ";
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    n++;
    cout<<"array after insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,size,c;
    cout<<"enter size of array ";
    cin>>size;
    int arr[size];
    cout<<"enter number of elements in array ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"enter 1 for insert element at begning, 2 to insert at position , and 3 to insert at last : ";
    cin>>c;
    switch (c) {

        case 1:
            insert_beg(arr,n);
            break; 

        case 2 :
           insert_pos(arr,n);
           break;

        case 3:
           insert_end(arr,n);
           break;   
        default:
         cout << "invalid input";      
    }
    return 0;
}