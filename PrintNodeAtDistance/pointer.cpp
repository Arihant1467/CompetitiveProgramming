#include<iostream>
using namespace std;
int main(){
    int m=2;
    void point(int *c);
    point(&m);
    return 0;
}
void point(int *c){
    cout<<*c;
    return;
}