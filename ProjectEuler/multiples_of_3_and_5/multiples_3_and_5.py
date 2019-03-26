'''
Print summation of all numbers which are multiples of 3,5 and less than 1000

URL : https://projecteuler.net/problem=1
'''

def sum_multiple(n,k):
    last = n//k
    result = (k*(last)*(last+1))/2
    return int(result)


if __name__ == "__main__":
    N=1000
    print(sum_multiple(N-1,3)+sum_multiple(N-1,5)-sum_multiple(N-1,3*5))