#include<iostream>
#include<climits>
using namespace std;

int main(){
    void coinchange(int coins[],int total,int size);
    int coins[] = {7,2,3,6};
    int total = 13;
    coinchange(coins,total,4);
    return 0;
}

void coinchange(int *coins,int total,int numberofcoins){
    int t[total+1]; // it will store number of coins to form the number
    int r[total+1]; // it will store the index of the last denomination added to make up the number
    

    for(int k=0;k<=total;++k){
        t[k] = INT_MAX-1;
        r[k] = -1;
    }
    t[0] = 0;

    for(int j=0;j<numberofcoins;++j){
        for(int i=1;i<=total;++i){
                if(i>=coins[j]){
                    if( (t[i-coins[j]]+1) < t[i]){
                        t[i] = t[i-coins[j]]+1;
                        r[i] = j;
                    }   
                }
        }
    }

    if(t[total] == INT_MAX-1){
        cout<<"No dinominations found"<<endl;
    }else{
        cout<<"Minimum dinominations required for  "<<total<<" is "<<t[total]<<"\n";    
    }
    
    

}