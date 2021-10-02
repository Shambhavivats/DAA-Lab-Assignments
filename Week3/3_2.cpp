#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    int i,j,min_idx,temp;
    int comp=0,swaps=0;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            temp=0;
            comp++;
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
            temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
            swaps++;

        }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"Comparisons = "<<comp<<endl<<"swaps = "<<swaps<<endl;
}
void readfile()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selection(arr,n);
    }
}
int main()
{
    readfile();

    return 0;
}
