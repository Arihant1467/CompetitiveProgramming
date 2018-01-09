#include<iostream>
using namespace std;
int main(){
    int arr[35+7] ={0};
    // arr[0] = 1;arr[1] = 1;arr[2] = 1;
    // arr[3] = 1;arr[4] = 1;arr[5] = 1;
    // for(int i=0;i<35;++i){
    //         int n = 2*arr[i];
    //         for (int j = i+1; j < i+1+6; ++j){
    //             arr[j] = arr[j]+n;
    //         }
    // }
    arr[0]=1;
    for(int i=0;i<37;++i){
        if(i-5>=0){
            arr[i+1] = (arr[i]-arr[i-5])*3;
        }else{
            arr[i+1] =3*arr[i];
        }
    }
    int test = 0; int query = 0;
    cin>>test;
    while(test--){
        cin>>query;
        cout<<arr[query-1]<<endl;
    }
    return 0;
}