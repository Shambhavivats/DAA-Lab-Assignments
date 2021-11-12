#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p1,p2;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    priority_queue<int,vector<int>,greater<int> >minheap;
    for(int i=0;i<n;i++){
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1)
    {
        p1=minheap.top();
        minheap.pop();
        p2=minheap.top();
        minheap.pop();
        ans+=p1+p2;
        minheap.push(p1+p2);
    }
    cout<<ans<<endl;
    return 0;
}
