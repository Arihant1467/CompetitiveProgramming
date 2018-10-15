#include<iostream>
#include<climits>

using namespace std;

int main(){
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;

    if(size==0){
        cout<<"No max here"<<endl;
    }else if(size==1){
        cout<<"Maximum sum contigous array "<<a[0]<<endl; 
    }else{
            for(int i=0;i<size;++i){
                max_ending_here += a[i];

                if(max_so_far < max_ending_here){
                    max_so_far = max_ending_here;
                }

                if(max_ending_here < 0){
                    max_ending_here = 0;
                }
            }
        cout<<"Maximum sum contigous array "<<max_so_far<<endl;
    }
    
    return 0;
}