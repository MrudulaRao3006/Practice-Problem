// power of number using power multiplication
#include <iostream>
using namespace std;

int sqr(int n, int m){
    int ans=1;
    for(int i=0; i<m; i++){
        ans*=n;
    }
    return ans;
}
int main() {
    // Write C++ code here
    int n, m, m2;
    cin>>n>>m>>m2;
    int power_mult=m*m2;
    cout<<sqr(n, power_mult);
    

    return 0;
}



