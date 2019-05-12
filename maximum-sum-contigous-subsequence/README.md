### Maximum sum in Array where elements are in contigous position
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#### There are two types of solutions available.
1.  0(n) dynamic programming solution
2. 0(nlogn) divide and conquer solution which is more subtle.

Soon, I will post the code for divide and conquer solution [here]().

#### For 0(n) dynamic programming solution.
- Here we will use kadane's algorithm to keep track of sum.
- We have two variables max_so_far and max_end_here which tells use maximum-sum in the whole array and maximum-sum if we include the above traversing element.

##### Algorithm
> Initialize:
    max_so_far = 0
    max_ending_here = 0

> Loop for each element of the array
   max_ending_here = max_ending_here + a[i]
   if(max_ending_here < 0)
            max_ending_here = 0
   if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far



