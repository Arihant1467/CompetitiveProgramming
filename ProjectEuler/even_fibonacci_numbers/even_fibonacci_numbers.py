def fibonacci():
    n1,n2,i,sum=1,2,0,2
    while n2<=4*1000000:
        t=n1
        n1=n2
        n2=n2+t
        i+=1
        if i%3==0:
            sum+=n2
    print(sum)

if __name__ == "__main__":
    fibonacci()


