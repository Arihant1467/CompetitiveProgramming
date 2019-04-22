#include <iostream>
using namespace std;

int main(){
    
    unsigned long long np,mp;
    int n,m,a;
    cin>>n>>m>>a;
	np = n%a == 0 ? n/a : (n/a + 1);
	mp = m%a == 0 ? m/a : (m/a + 1);
	cout<<np*mp;
    return 0;
}
