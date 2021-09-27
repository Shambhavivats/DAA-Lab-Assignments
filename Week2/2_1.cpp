#include<iostream>
#include<math.h>
using namespace std;
int bin_search(int arr[],int l, int r ,int n,int key)
{
    int k,cnt=0,mid=0,i;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(arr[mid]==key)
        {
             if(arr[mid+1]>arr[mid])
             {
                 for(i=mid;i>0;i--)
                 {
                     if(arr[i]==arr[mid])
                    {
                        continue;
                    }
                    else
                        break;
                 }
             }
             else{
                for(i=mid;i<n;i++)
                {
                    if(arr[i]==arr[mid])
                    {
                        continue;
                    }
                    else
                        break;
                }
             }
                cnt=fabs(i-mid);
                cout<<key<<" - "<<cnt;
                return 0;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<"Not Present"<<endl;
}
int readfile()
{
    int t,n,key,l,r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        l=0;
        r=n-1;

        bin_search(arr,l,r,n,key);
    }
    return 0;
}
int main()
{
    readfile();
    return 0;
}
