import sys
a= [4,1,4,2,1]
size = len(a)
if(size==0):
    print("No list to compute maximum")
    sys.exit()

if(size==1):
    print("The max is ",a[0])
    sys.exit()
if(size==2):
    print("The max is ",max(a[0],a[1]))
    sys.exit()

#it denotes the maximum sum we can obtain if we include current element
incl = 0 
#it denotes the maximum sum we can obtain if we do not include current element
excl = 0

for i in range(size):
    temp = incl
    incl = max(incl,excl+a[i])
    excl = temp

print("The max sum is ",incl)
sys.exit()

