#include<iostream>
using namespace std;
int merges(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
       L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];
    }
    }
    while(i<n1){
        arr[k++]=L[i++];

    }
    while(j<n2){
        arr[k++]=R[j++];
    }
}
int mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merges(arr,l,m,r);
    }
}
int findpair(int arr[],int n,int key)
{
    int i,j,flag=0;
    for(i=0,j=n-1;i<j;)
    {
        if(arr[i]+arr[j]==key){
            cout<<arr[i]<<" "<<arr[j]<<"   ";
            flag=1;
            j--;
        }
        else if(arr[i]+arr[j]<key)
        i++;
        else
            j--;
    }
    if(flag==0) cout<<"No Such pair Exist"<<endl;
    return 0;
}
int readfile()
{
    int t,a,key;
    cin>>t;
    for(int k=0;k<t;k++){
    int n,l=0,r=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=n-1;
    mergesort(arr,l,r);
    cin>>key;
    findpair(arr,n,key);
}
}
int main()
{
   readfile();
}

