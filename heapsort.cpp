#include<iostream>
using namespace std;

void maxheapify(int a[],int i,int n){
    int j,temp;
    temp=a[j];
    j=2*i;
    while (j<=n)
    {
       if(j<n && a[j+1]>a[j]){
           j+=1;

       }
       if(temp>a[j]){
           break;
        
       }
       else if(temp<=a[j]){
           a[j/2]=a[j];
           j=2*j;



       }
       
    }
    a[j/2]=temp;
    return;

    
}
void minheapify(int a[],int i,int n){
    int j,temp;
    temp=a[j];
    j=2*i;
    while (j<=n)
    {
       if(j<n && a[j+1]<a[j]){
           j+=1;

       }
       if(temp<a[j]){
           break;
        
       }
       else if(temp>=a[j]){
           a[j/2]=a[j];
           j=2*j;



       }
       
    }
    a[j/2]=temp;
    return;

    
}
void buildmaxheap(int a[],int n){
    int i;
    for (int i = n/2; i >=1 ; i--)
    {
        maxheapify(a,i,n);

    }
    
}
void buildminheap(int a[],int n){
    int i;
    for (int i = n/2; i >=1 ; i--)
    {
        minheapify(a,i,n);
        
    }
    
}
void maxheapsort(int a[],int n){
    int i,temp;
    for ( i = n; i >=2; i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        maxheapify(a,1,i-1);

    }
    
}
void minheapsort(int a[],int n){
    int i,temp;
    for ( i = n; i >=2; i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        maxheapify(a,1,i-1);
        
    }
    
}
void print(int a[],int n){
    cout<<"sorted data";
    for (int i = 0; i < n; i++)
    {
        cout<<"->"<<a[i];

    }
    
}





int main(){
    int n,ch;
    cout<<"enter the no of elelements :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {
       cin>>arr[i];

     }
    do{
        cout<<"\n1. heap sort using max heap";
        cout<<"\n2 heap sort using min heap";
        cout<<"\n0.exit";
        cout<<"enter the choice";
        cin>>ch;
        switch (ch)
        {
        case 1:
            buildmaxheap(arr,n);
            maxheapsort(arr,n);
            print(arr,n);
            break;
        case 2:
            buildminheap(arr,n);
            minheapsort(arr,n);
            print(arr,n);


        case 0:
            cout<<"exiting";
            return 0;

        default:
          cout<<"\n invalid choice"<<endl;
            break;
        }

     }
     while (ch!=0);
}

     


    




  











