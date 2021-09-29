#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int i,j,temp=0;
    int comp=0;
    int shifts=0;
     for(int i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>=temp)
        {
            comp++;
            arr[j+1]=arr[j];
            shifts++;
            j=j-1;
        }
        arr[j+1]=temp;
        shifts++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"comparisons: "<<comp<<endl;
    cout<<"shifts: "<<shifts<<endl;

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
    insertion(arr,n);
    }
}
int main()
{
    readfile();

    return 0;
}
