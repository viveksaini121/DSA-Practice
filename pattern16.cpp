#include <bits/stdc++.h>
using namespace std;

int main(){
    char k = 'A';
    for(int i=0;  i<5; i++){
        for(int j=0; j<=i; j++){
            cout << char(int(k+i));
        }
        cout << endl;
    }
}