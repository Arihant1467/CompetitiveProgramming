#include<iostream>
using namespace std;
int arr[35+7] ={0};
void preFetch(){
    ::arr[0] = 1;
    for(int i=0;i<35;++i){
        int n = 2*::arr[i];
        for (int j = i+1; j < i+1+6; ++j){
            ::arr[j] = ::arr[j]+n;
        }
    }
}
int main(){
    preFetch();
    int test = 0; int query = 0;
    cin>>test;
    while(test--){
        cin>>query;
        cout<<::arr[query-1]<<endl;
    }
    return 0;
}