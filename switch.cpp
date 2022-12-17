#include <iostream>
using namespace std;

int main(){
    char b;
    cin>>b;
    int a, c;
    cin>>a;
    cin>>c;
    
    switch(b){
        case '+':
         cout<<a+c;
         break;
         case '-':
        cout<<a-c;
        break;
        
        default:
        cout<<"invalid";
        break;
    }
    
    
    return 0;
}
