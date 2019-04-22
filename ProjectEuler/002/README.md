### Algorithm

#### Fibonacci Sequence

1 1 <span style="color:red">2</span> 3 5 <span style="color:red">8</span> 13 21 <span style="color:red">34</span> 55 89 <span style="color:red">144</span> 233 377 <span style="color:red">610</span>

For the given question the fibonacci series starts with 1,2
From the pattern we can see that every 3rd term is even term which is formed by adding two odd numbers in previous position.


```
F(N) = F(N-1) + F(N-2)
F(N) = F(N-2) + F(N-3) + F(N-2)
F(N) = 2*F(N-2) + F(N-3)
F(N) = 2*[ F(N-3) + F(N-4) ] + F(N-3)
F(N) = 3*F(N-3) + 2*F(N-4)
F(N) = 3*F(N-3) + F(N-4) + F(N-5) + F(N-6)
F(N) = 3*F(N-3) + F(N-3) + F(N-6)
F(N) = 4*F(N-3) + F(N-6)
```



```
Time Complexity : O(N)
Space Complexity : O(1)
```
--- 

[https://projecteuler.net/problem=2](https://projecteuler.net/problem=2)
