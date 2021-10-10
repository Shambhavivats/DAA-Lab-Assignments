#include<iostream>
using namespace std;
int merges(int arr[],int l,int m,int r,int &c)
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
            c++;
            arr[k++]=L[i++];
        }
        else{
                c++;
            arr[k++]=R[j++];
    }
    }
    while(i<n1){
        arr[k++]=L[i++];

    }
    while(j<n2){
        arr[k++]=R[j++];
    }
    return c;
}
int mergesort(int arr[],int l,int r,int &c)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m,c);
        mergesort(arr,m+1,r,c);
        merges(arr,l,m,r,c);
    }
}
int readfile()
{
    int t,c,a;
    cin>>t;
    for(int k=0;k<t;k++){
    int n,l=0,r=0,c=0,inv=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=n-1;
    for(int i=0;i<n;i++)
    { for(int j=i+1;j<n;j++){
        if(i<j && arr[i]>arr[j])
        {
            inv++;
        }
    }
    }
    a=mergesort(arr,l,r,c);
    for(int i=0;i<=r;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"comparisons = "<<a<<endl;

    cout<<"inversions = "<<inv<<endl;

}
}
int main()
{
   readfile();
}
