#include<iostream>


using namespace std;
//here tree is rooted at i
void heapify(int arr[],int n,int i){
    int largest= i;
    int l=2 * i + 1;
    int r=2 * i + 2;

    //left is larger
    if(l<n && arr[l] > arr[largest]){
        largest=l;


    }
    if(r<n && arr[r] > arr[largest]){
        largest=r;


    }
    if (largest!=i)
    {
      swap(arr[i],arr[largest]);
        //recursion
      heapify(arr,n,largest);

    }
  
    

    

    

}
void heapsort(int arr[],int n){
    for (int i = n/2 -1; i>=0; i--)
    {
       heapify(arr,n,i);

    }
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0],arr[i]);

    
     heapify(arr,i,0);
    }
    
    
}
void printarr(int arr[],int n){
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";


        
    }
    
}

int main()
{
    int arr[]={12,22,11,6,8,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    cout<<"sorted array is : "<<" ";
    printarr(arr,n);
  


}
