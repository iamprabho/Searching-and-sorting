#include<iostream>
#include<array>
using namespace std;
void swap(int *y,int *u){
    int temp=*y;
    *y=*u;
    *u=temp;

}
void selectionsort(int arr[],int n){
    int index;

    for (int i = 0; i < n-1; i++)
    {
        index=i;
      for (int j = i+1; j < n; j++)
      {
         
        if(arr[j]<arr[index]){
             index=j;
             swap(&arr[index],&arr[i]);
        }
      }
      
    }
    
}
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    cout<<"array sorted as"<<endl;
    print(arr,n);
    return 0;


}