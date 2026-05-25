#include <bits/stdc++.h>
using namespace std;

int main(){
    char l = 'A';
    for (int i=0; i<4; i++){
        for(int j=i; j<4; j++){
            cout << " ";
        }
        for(int k=0; k<=i; k++){
            cout << char(int(l+k));
        }
        for(int m=i; m>0; m--){
            cout << char(int(l+m-1));
        }
        cout << endl;
    }
}