#include <iostream>
#include<stdlib.h>
#include<limits.h>
#include<stdio.h>

using namespace std;
#define V 5

int minimumIndex(int key[],bool mstSet[])
{

    int min=INT_MAX,min_index;
    for(int v=0;v<V;++v)
    {
        if(mstSet[v]==false&&key[v]<min)
        {min=key[v];min_index=v;}
    }
    return min_index;
}


void printMST(int parent[],int graph[V][V])
{
    int sum=0;

    for(int i=1;i<V;++i)
    {
    sum+=graph[i][parent[i]];
    cout<<parent[i]<<"-"<<i<<"\t cost: "<<graph[i][parent[i]]<<endl;
    }
    cout<<"\nSum of edges-:\t";
    cout<<sum<<endl;
}

void makeMST(int graph[V][V])
{

    int parent[V],key[V];
    bool mstSet[V];
    for(int i=0;i<V;++i)
    {
        key[i]=INT_MAX;
        mstSet[i]=false;
    }
    key[0]=0;
    //mstSET[0]=true;
    parent[0]=-1;

    for(int count=0;count<V;++count)
    {
      int u=minimumIndex(key,mstSet);
      mstSet[u]=true;
      for(int v=0;v<V;++v)
      {

          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
             parent[v]  = u, key[v] = graph[u][v];
      }
    }
    printMST(parent,graph);

}
int main()
{
    int graph[V][V] =  {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
                     makeMST(graph);

    return 0;
}
