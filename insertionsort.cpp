#include<iostream>
#include<array>
using namespace std;
void insertionsort(int arr[],int n){
    int key;

    for(int i=1;i<n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;




    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
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
    n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    cout<<"array sorted as: "<<endl;
    print(arr,n);

    
    return 0;

}









