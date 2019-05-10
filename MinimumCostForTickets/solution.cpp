#include<map>
#inlcude<algorithm>

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int* dp = (int*)malloc(366*sizeof(int));
        map<int, int> daysMap;
        for(int i=0;i<days.size();++i){
            daysMap.insert( pair<int,int>(days[i],days[i]) );
        }
        
        memset (dp,0,sizeof(dp));
        
        for(int i=1;i<=365;++i){
            
            if(daysMap.find(i) == daysMap.end()){
                dp[i] = dp[i-1];
                continue;
            }
            
            dp[i] = min(min(this->cost(i-1,dp)+costs[0],this->cost(i-7,dp)+costs[1]),this->cost(i-30,dp)+costs[2]);
        }
        
        return dp[365];
        
    }
    
    int cost(int index,int *arr){
        return index<0? 0:arr[index];
    }
};