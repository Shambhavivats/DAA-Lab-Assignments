#include<bits/stdc++.h>
using namespace std;
bool ispathdfs(vector<vector<int>> adj,int s,int d,int v,vector<bool> &vis)
{
    int k;
    if(s==d)
    return true;
    stack<int> st;
    st.push(s);
    vis[s]=true;
    while(!st.empty())
    {
        k=st.top();
        st.pop();
        for(int i=1;i<v+1;i++)
        {
            if(adj[k][i] && i==d)
                return true;
            if(!vis[i])
            {
                vis[i]=true;
                st.push(i);
            }
        }

    }
    return false;

}
int main()
{
    int v,s,d,x;
    cin>>v;
    vector<vector<int>>adj;
    vector<bool>vis(v,false);
    for(int i=0;i<v+1;i++)
    {
        vector<int> v1;
        for(int j=0;j<v+1;j++){
            cin>>x;
            v1.push_back(x);
    }
    adj.push_back(v1);
    }
    cin>>s>>d;
    if(ispathdfs(adj,s,d,v,vis))
        cout<<"Yes Path Exists"<<endl;
    else
        cout<<"No Path Exists"<<endl;
    return 0;
}


