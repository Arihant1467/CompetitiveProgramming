### Maximum sum in Array where  no elements are adjacent
[Reference-1](https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/)
[Reference-2](https://www.youtube.com/watch?v=UtGtF6nc35g)

We will maintain two variables, which are 
=> inclusive : It tells us maximum sum in array if we include the current element.
=> exclusive : It tells maximum sum in an array if we do not include the current element.
#### STEPS
1. for i=0
inclusive=a[**i**];
exclusive=0;
2. for i=1
inclusive = max(inclusive,exclusive+a[**i**]); 
exclusive= previous value of inclusive;
This process continues till the end of **array** is encountered


