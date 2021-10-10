#include<iostream>
using namespace std;
int partitions(int arr[],int l,int r,int &swaps,int &c)
{
    int temp,a=0;
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
        temp=0;
        if(arr[j]<=pivot)
        {
            i++;
            c++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            swaps++;
        }
        else{
            c++;
        }
    }
    a=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=a;
    swaps++;
    return i+1;

}
void quicksort(int arr[],int l,int r,int &swaps,int &c)
{
    if(l<r)
    {
        int p=partitions(arr,l,r,swaps,c);
        quicksort(arr,l,p-1,swaps,c);
        quicksort(arr,p+1,r,swaps,c);
    }
}

int readfile()
{
    int t,flag=0,swaps=0,c=0;
    cin>>t;
    for(int k=0;k<t;k++){
    int n,l=0,r=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    r=n-1;
    swaps=0;c=0;
    quicksort(arr,l,r,swaps,c);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"Comparisons = "<<c<<endl<<"Swaps = "<<swaps<<endl;
}
}
int main()
{
    readfile();

    return 0;
}
