#include <bits/stdc++.h>
using namespace std;

int main(){
    char k = 'E';
    for(int i=0; i<5; i++){
        for(int j=i; j>=0; j--){
            cout << char(int(k-j)) << " ";
        }
        cout << endl;
    }
}