// finding min path (0,0) to (m,n)
#include<iostream>
using namespace std;
#define R 3
#define C 3
int min(int x,int y,int z){
    if(x<=y && x<=z){ return x; }
    if(y<=x && y<=z){ return y; }
    if(z<=x && z<=y){ return z; }
}
int minCostPath(int cost[R][C],int m,int n){
int i,j;
int temp[R][C];
temp[0][0]=cost[0][0];
    // assigning first row of temporary array
    for(i=1;i<=m;++i){
        temp[0][i]=temp[0][i-1]+cost[0][i];
    }
    // assigning first row of temporary array
    for (i = 1; i <= n; ++i){
        temp[i][0] = temp[i-1][0] + cost[i-1][0];
    }
    //building the remaining rows
    for(i=1;i<=m;++i){
        for(j=1;j<=n;++j){
            temp[i][j]=min(temp[i-1][j],temp[i][j-1],temp[i-1][j-1])+cost[i][j];
        }
    }
return temp[m][n];
}
int main(){
    int cost[R][C] = {{1,2,3},{4,8,2},{1,5,3}};
    cout<<minCostPath(cost,2,2)<<endl;
    return 0;
}