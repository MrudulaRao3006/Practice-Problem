#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int arr[n];
    //input;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //Print array
    
    for(int i=0; i<n; i++){
        if(arr[i]==80){
            cout<<"matched: "<<i;
        }
    }

    return 0;
}
