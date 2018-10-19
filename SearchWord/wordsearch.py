import time
class Board:
    
    def __init__(self,board): 
        self.board = board
        self.boardlen=len(board)
        self.boardwidth=len(board[0])
        self.visited = [ [False]*len(board[0]) for i in range(len(board)) ]
    
    def exist(self, word):
    
        for i in range(len(self.board)):
            for j in range(len(self.board[i])):
                if(self.board[i][j] == word[0]):
                    if(self.helper(i,j,0,word)):
                        return True
        
        return False
    
    
    def helper(self,i,j,wordcnt,word):
        
        if(i<0 or i>self.boardlen-1 or j<0 or j>self.boardwidth-1 or wordcnt>len(word)-1):
            return False
        
        if(self.visited[i][j]):
            return False
        
        if(wordcnt == len(word)-1 and self.board[i][j] == word[wordcnt]  ):
            return True
        
        if(self.board[i][j] != word[wordcnt]):
            return False
        
        self.visited[i][j] = True
        
        if(self.helper(i-1,j,wordcnt+1,word)):
            return True
        elif(self.helper(i+1,j,wordcnt+1,word)):
            return True
        elif(self.helper(i,j-1,wordcnt+1,word)):
            return True
        elif(self.helper(i,j+1,wordcnt+1,word)):
            return True
        else:
            self.visited[i][j] = False
            return False
        
word = "ABCCED"
board = [
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

instance = Board(board)
print(instance.exist(word))

        