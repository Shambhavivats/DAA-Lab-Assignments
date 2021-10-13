#include<iostream>
using namespace std;
void duplicates(char arr[],int n)
{
    int H[26]={0},flag=0,maxi=0,l;
    for(int i=0;arr[i]!='\0';i++)
    {
        H[arr[i]-97]+=1;
    }
    maxi=H[0];
    for(int i=1;i<26;i++)
    {

        if(H[i]>1)
        {
            flag=1;
            if(H[i]>=maxi){
                maxi=H[i];
                l=i;
        }
        }
    }
if(flag==1)
    cout<<char(l+97)<<"-"<<maxi<<endl;
    else
        cout<<"No Duplicates"<<endl;

}
int readfile()
{
    int t,c,a;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    duplicates(arr,n);
}
}
int main()
{
   readfile();
}

