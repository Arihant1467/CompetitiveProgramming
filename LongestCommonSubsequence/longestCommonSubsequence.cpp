#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int lcs();
    cout<<lcs()<<"\n";
    return 0;
}
int lcs(){
char x[] = "AGGTAB";
char y[] = "GXTXAYB";
int l[7][8];
for(int i=0;i<=6;++i){
    for(int j=0;j<=7;++j){
        if(i==0 || j==0){
            l[i][j] = 0;
        }else if(x[i-1] == y[j-1]){
            l[i][j] = l[i-1][j-1]+1;
        }else{
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
}
return l[6][7];
}