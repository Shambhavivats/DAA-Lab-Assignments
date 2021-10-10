#include<iostream>
#include<climits>
using namespace std;
int partitions(int arr[],int l,int r)
{
    int x=arr[r],i=l,temp=0;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<=x){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    temp=arr[i];
    arr[i]=arr[r];
    arr[r]=temp;
    return i;
}
int kth(int arr[],int l,int r,int k)
{
    if(k>0 && k<=r-l+1)
    {
        int pos=partitions(arr,l,r);
        if(pos-l ==k-1)
            return arr[pos];
        if(pos-l >k-1)
            return kth(arr,l,pos-1,k);
        return kth(arr,pos+1,r,k-pos+l-1);
    }
    return INT_MAX;
}
void readfile()
{
    int t,l,r,k,a;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    l=0;
    r=n-1;
    cin>>k;
    cout<<kth(arr,l,r,k)<<endl;

    }
}
int main()
{
    readfile();

    return 0;
}
