#include<iostream>
#include<array>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)//as i will not go upto last ele
    {
        for (int j = 0; j< n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
            
        }
        
    }
    
}
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
      cout<<endl;

    }
    
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    bubblesort( arr, n);
    cout<<"sorted array"<<endl;

    printarr(arr,n);

  return 0;


}








