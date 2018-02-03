/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
By convention, 1 is included.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ugly[150];
    int minimum_of_three(int a,int b,int c);
    ugly[0]=1;
    int i2=0,i3=0,i5=0;
    int next_multiple_2,next_multiple_3,next_multiple_5,next_number_to_be_filled;
    next_multiple_2=ugly[0]*2;
    next_multiple_3=ugly[0]*3;
    next_multiple_5=ugly[0]*5;
    for(int i=1;i<150;++i){
        next_number_to_be_filled = minimum_of_three(next_multiple_2, next_multiple_3, next_multiple_5);
        ugly[i] = next_number_to_be_filled;
        if (next_number_to_be_filled == next_multiple_2){
            ++i2;
            next_multiple_2=ugly[i2] * 2;
        }
        if (next_number_to_be_filled == next_multiple_3){
            ++i3;
            next_multiple_3 = ugly[i3] * 3;
        }
        if (next_number_to_be_filled == next_multiple_5){
            ++i5;
            next_multiple_5 = ugly[i5] * 5;
        }
    }
    for(int i=0;i<150;++i){
        cout<<ugly[i]<<endl;
    }
    return 0;
}
int minimum_of_three(int a, int b, int c){
    int d[]={a,b,c};
    int m=d[0];
    for(int j=1;j<3;++j){
        if(m>d[j]){
            m=d[j];
        }
    }
    return m;
}