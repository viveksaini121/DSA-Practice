#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<(2*i+1); j++){
            cout << "*";
        }
        cout<<endl;
    }
    for(int i=5; i>=0; i--){
        for(int k=0;k<(2*i+1);k++){
            cout << "*";

        }
        cout << endl;
    }
}