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
        else
            arr[k++]=R[j++];
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merges(arr,l,m,r);
    }
}

int readfile()
{
    int t,flag=0;
    cin>>t;
    for(int k=0;k<t;k++){
    int n,l=0,r=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=n-1;
    mergesort(arr,l,r);
    for(int i =0;i<n;i++)
       {
           if(arr[i]==arr[i+1])
            {
              flag=1;
             break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
}
int main()
{
    readfile();

    return 0;
}
