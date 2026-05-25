#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        for(int k=0; k<2*(4-i)-2; k++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            cout<<i-j+1;
        }
        cout << endl;
    }
}

