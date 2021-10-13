#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m)
{
    int i=0;int j=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}

void readfile()
{
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    intersection(arr1,arr2,n,m);
}
int main()
{
    readfile();
}
