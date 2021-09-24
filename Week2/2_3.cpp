#include<iostream>
#include<math.h>
using namespace std;
int countpair(int arr[],int n,int k);
void readfile()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++){
            cin>>arr[i];
         }
         cin>>k;
         cout<<countpair(arr,n,k)<<endl;
    }
}
int countpair(int arr[],int n,int k)
{
    int sub=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sub=fabs(arr[i]-arr[j]);
            if(sub==k)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    readfile();
}
