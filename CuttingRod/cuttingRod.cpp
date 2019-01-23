#include<iostream>
#include<algorithm>


using namespace std;
int main(){
	int rod_len = 5;
	int price[] = {0,2,5,7,8};
	int price_len = 5;
	int dp[price_len+1][rod_len+1];
	for(int i=0;i<price_len+1;++i){
		for(int j=0;j<rod_len+1;++j){
			dp[i][j] = max(dp[])
		}
	}
	
	cout<<dp[price_len][rod_len];
	return 0;
}
