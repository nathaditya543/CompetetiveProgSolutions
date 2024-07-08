#include<bits/stdc++.h>
using namespace std;
int main(){
    string n,n_size;   
    cin >> n;
    int flag = 0;

    for(char i: n){
        if(i == '4' || i == '7'){
            flag++;
        }
    }

    if(flag == 4 || flag == 7)
        cout << "YES";
    else
        cout << "NO";
}