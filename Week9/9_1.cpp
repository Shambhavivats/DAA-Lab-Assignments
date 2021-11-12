#include<bits/stdc++.h>
using namespace std;
#define v 5
#define INF 99999
void printsolution(int dist[][v])
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(dist[i][j]==INF)
                cout<<"INF"<<" ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floydwarshall(int graph[][v])
{
    int dist[v][v],i,j,k;
    for(i=0;i<v;i++)
        for(j=0;j<v;j++)
        dist[i][j]=graph[i][j];
     for(k=0;k<v;k++)
        {
            for(i=0;i<v;i++)
            {
                for(j=0;j<v;j++)
                {
                    if(dist[i][j]>(dist[i][k]+dist[k][j])&&(dist[k][j]!=INF &&dist[i][k]!=INF))
                        dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
        printsolution(dist);
}
int main()
{
    int graph[v][v]={{0,10,5,5,INF},
           {INF,0,5,5,5},
           {INF,INF,0,INF,10},
           {INF,INF,INF,0,20},
           {INF,INF,INF,5,0}  };
    floydwarshall(graph);
    return 0;
}
