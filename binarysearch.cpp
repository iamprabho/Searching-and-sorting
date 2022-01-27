#include<iostream>
#include<array>
using namespace std;
int binarySearch(int arr[],int key){
    int s=0;//start and end
    int e=4;
    while (s<=e)
    {
       int mid=(s+e)/2;
       if(arr[mid]==key){
           return mid;

       }
       else if(arr[mid]>key){
           e=mid-1;

       }
       else{
           s=mid+1;
       }
    }
    return 0;

}

int main(){
   
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];


    }
    int key;
    cin>>key;
    cout<<"the index is: ";

    cout<<binarySearch(arr,key)<<endl;
    return 0;

}