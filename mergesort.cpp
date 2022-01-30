#include<iostream>
#include<array>
using namespace std;

void merge(int *a,int l,int h){
     int mid=(l+h)/2;
     int i=l;
     int j=mid+1;
     int k=l;
     int temp[100];
     //here we use three pointers i j k for start mid and start of temp  and we will store sorted array in temp using k and then we will copy it back in original one
    while (i<=mid && j<=h)
    {
        if (a[i] <a[j])//as i is less we have k point to index 0 in temp so we will do k =i
        {
           temp[k++]=a[i++];

        }
        else{
            temp[k++]=a[j++];

        }
        
    
    }
    while(i<=mid){
        temp[k++]=a[i++];

    }
    while (j<=h)
    {
       temp[k++]=temp[j++];

    }
    //copy all ele to original
    for (int i = l; i <= h; i++)
    {
        a[i]=temp[i];

    }
    
    

}

void mergesort(int a[],int l,int h){//her if low index is lesser than high
    if(l>=h){
        return;
    }
    //diivde

    int mid=(l+h)/2;
    //recursion in arrays from l to mid and mid+1 to h so we will get it as seperate elements
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    //now we need to merge it
    merge(a,l,h);

      

    


}
int main(){
    int a[100];
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    
    }
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    
    }

    
    return 0;

}