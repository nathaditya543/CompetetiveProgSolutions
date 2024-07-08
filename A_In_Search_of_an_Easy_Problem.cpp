#include<bits/stdc++.h>
using namespace std;


int solve(int p){
    for(int i = 0 ; i < p; i++){
        int val;
        cin >> val;
        if(val == 1){
            cout << "HARD" << endl;
            return -1;
        }
    }
        cout << "EASY" << endl;
        return 0;
}

int main(){
    int p;
    cin >> p;
    int k = solve(p);
}