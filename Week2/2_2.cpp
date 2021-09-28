#include<iostream>
using namespace std;
int algo(int arr[],int n)
{
    int temp=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
          {
            temp=arr[i]+arr[j];
            if(temp<arr[n]){
            for(int k=j+1;k<=n;k++)
            {
                if(temp==arr[k])
                {
                    cout<<i<<", "<<j<<", "<<k;
                    return 0;
                }
            }
            }
          }
    }
    cout<<"No sequence found"<<endl;
}
void readfile(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    algo(arr,n);
    }
}
int main()
{
    readfile();

}
