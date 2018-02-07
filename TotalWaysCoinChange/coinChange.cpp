/*
 * Given a total and coins of certain denominations find number of ways total
 * can be formed from coins assuming infinite supply of coins
 *
 * References:
 * http://www.geeksforgeeks.org/dynamic-programming-set-7-coin-change/
 */
#include<iostream>
using namespace std;
int coinChange(int total,int *coins,int coinlength){
    int table[total+1][coinlength];
//assigning first column as zero
    for(int j=0;j<coinlength;++j){
        table[j][0]=0;
    }
//assigning first row
    for(int i=1;i<=total;++i){
        table[0][i]= i%coins[0]==0 ? 1 : 0;
    }
//building table for every row in a bottom up manner, table[total][coinlength-1] will be the answer
    for(int j=1;j<coinlength;++j){
        for(int i=1;i<=total;++i){
            if(i < coins[j]){
                table[j][i] = table[j-1][i];
            }else{
                table[j][i] = table[j-1][i]+table[j][i-coins[j]];
            }
        }
    }
//printing the table
    cout<<"The table is:"<<endl;
    for(int i=0;i<coinlength;++i){
        for(int j=0;j<total+1;++j){
            cout<<table[i][j]<<"  ";
        }
        cout<<endl;
    }
    return table[coinlength-1][total];
}
int main(){
    int total = 5;
    int coins[] = {1,2,3};
    cout<<coinChange(5,coins,3)<<endl;
}