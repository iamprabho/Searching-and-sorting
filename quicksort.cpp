#include<iostream>
#include<array>

using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}
//here we create qs and had declared right ele as pivot of array also have dec pointer at -1 positio ie l-1 
//now run loop from l to r if ar<pivot then i++  and swap arr,i,j after for loop also swap arr,i+1,j 


int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for (int j=l; j<r; j++)
    {
       if(arr[j]<pivot){
           i++;
           swap(arr,i,j);

        }
    }
    swap(arr,i+1,r);
    return i+1;


    
}

void quicksort(int arr[],int l,int r){
    if (l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);



    }
    
}
int main(){

    int arr[5]={4,55,3,78,54};
    quicksort(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
    
}











