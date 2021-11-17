#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,e,k,count=0,curr_end;
    cin>>n;
    vector<pair<int,int>> activity;
    vector<int>selected;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>e;
        activity.push_back(make_pair(e,s));
    }
    sort(activity.begin(),activity.end());
    curr_end=-1;
    for(int i=0;i<n;i++)
    {
        if(activity[i].second>curr_end)
        {
            count++;
            curr_end=activity[i].first;
            selected.push_back(i);
        }

    }
    cout<<"No of non-conflicting activities: "<<count<<endl;
    cout<<"List of selected activities: ";
    k=selected.size();
    for(int i=0;i<k;i++)
        cout<<selected[i]+1<<",";
        return 0;
}
