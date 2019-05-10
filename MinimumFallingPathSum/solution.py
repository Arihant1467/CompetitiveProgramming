class Solution:
    def minFallingPathSum(self, A: List[List[int]]) -> int:
        
        dp = [ [0]*len(A[i]) for i in range(len(A)) ]
        dp[-1] = A[-1]
        
        for i in range(len(A)-2,-1,-1):
            for j in range(len(A[i])):
                dp[i][j] = A[i][j]+min(self.getItem(dp,i+1,j-1),self.getItem(dp,i+1,j), self.getItem(dp,i+1,j+1)  )
         
        return min(dp[0])
                
                
    def getItem(self,dp,row,col):
        
        if col<0 or col>len(dp[row])-1:
            return float('inf')
        else:
            return dp[row][col]
        
        