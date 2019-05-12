###Question
We have been given a 2-D array which contains only valid english characters. Our goal is to find a whether a given word can be constructed by visting adjacent cells in the 2-D array. Here, adjacent refers to neighbor cells either vertically or horizontally.

##### For clear understanding : [Refer Here](https://leetcode.com/problems/word-search/description/) 

#####  Ways to Tackle:
There are three ways to tackle the problem:
1. Brute Force approach
2. Breadth First Search
3. Depth First Search

- We would avoid brute force approach because that will be 0(n * m * l) where 
n=length of board
m=width of board
l= length of word
So, clearly not a good approach

- We can apply BFS  but BFS should be applied when we want to inquire about number of ways to to form the string.

- We tackle with DFS.


**STEPS**
1. First find the occurence of first character of the word in the board
2. If we find the character then we search for the next character of the word recursively. 
3. When we find a character we mark it as visited, to avoid reiterations of same condition.
4. Provide boundary conditions in the helper function to avoid running in an infinite loop.
