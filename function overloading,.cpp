#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int fact(int n, int s){
    int res = n*s;
    return res;
}
    int main(){
        cout<<fact(3)*fact(2, 4);
        return 0;
    }
