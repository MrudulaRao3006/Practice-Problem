#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int num;
    cin>>num;
    
    bool flag=false;
    
    for(int i=2; i<=num/2; i++){
        
        if(num%i==0){
            flag=true;
        }
        
    }
    
    if(flag==true){
        cout<<"Non Prime";
    }
    else{
        cout<<"Prime";
    }
    
    return 0;
}
