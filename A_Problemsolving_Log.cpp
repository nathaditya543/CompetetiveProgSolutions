#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int _ = 0; _ < n; _++){
        int p;
        int ctr = 0;
        string str;
        cin >> p >> str;
        vector<int> freq(26,-1);

        for(int i = 0; i < p; i++){
            freq[str[i]-'A']++;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] >= i)
                ctr++;
        }
        
        cout << ctr << endl;
    }

}

int main(){
    int n;
    cin >> n;
    solve(n);
}