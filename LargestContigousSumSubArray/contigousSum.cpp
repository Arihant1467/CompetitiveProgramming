#include<iostream>
using namespace std;
int main(){
    int max_so_far=0,max_end_here=0;
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    for(int i=0;i<8;++i){
        max_end_here += a[i];
        if(max_end_here < 0){
            max_end_here = 0;
        }else if(max_so_far < max_end_here){
            max_so_far = max_end_here;
        }
    }
    cout<<max_so_far<<endl;
    return 0;
}