'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):

    def calc_height(temp):
        if not temp:
            return 0
        return 1+max(calc_height(temp.left),calc_height(temp.right))
    
    h = calc_height(root)
    return h-1