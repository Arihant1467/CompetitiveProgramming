#include <iostream>
#include <climits>
using namespace std;

int main()
{
    double median_of_sorted_array(int *a,int,int *b,int);
    system("clear");
    int a[]= {1,5,8,10,17,21};
    int b[]= {2,7,11,15,23};
    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);
    cout<<median_of_sorted_array(a,size_a,b,size_b);
    return 0;
}

double median_of_sorted_array(int *a,int size_a,int *b,int size_b){
    if(size_a>size_b){  return median_of_sorted_array(b,size_b,a,size_a); }
    int low=0,high=size_a-1,sum=size_a+size_b+1;
    int partition_a = (low+high)/2;
    int partition_b = sum/2-partition_a;
    while(low<=high){
    // Fetching elements of smaller size array
    int maxLeft_a = partition_a<0 ? INT_MIN:a[partition_a-1];
    int minRight_a = partition_a>size_a ? INT_MAX:a[partition_a];

    // Fetching elements of larger size array
    int maxLeft_b = partition_b<0 ? INT_MIN:b[partition_b-1];
    int minRight_b = partition_b>size_b ? INT_MAX:b[partition_b];

        if(maxLeft_a<minRight_b && maxLeft_b<minRight_a){
        // here we found the element
            if((size_a+size_b)%2==0){
                // here the sum of the two sizes is odd
                return (max(a[partition_a-1],b[partition_b-1])+min(a[partition_a],b[partition_b]))/2.0;
            }else{
                // here the sum of the two sizes is odd
                return max(a[partition_a-1],b[partition_b-1]);
            }
        }else if(maxLeft_a>minRight_b){
            // we are very far on the right , we need to move left
            high = partition_a-1;
        }else{
            // we are very far on the left , we need to move right
            low = partition_a;
        }
    }
}
