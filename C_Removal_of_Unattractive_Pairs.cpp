#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int _ = 0; _ < n; _++){
        int p;
        string str;
        cin >> p >> str;
        vector<int> freq(26,0);
        for(int i = 0; i < p; i++){
            freq[str[i] - 'a']++;
        }

        int sum = 0;
        int max = *max_element(freq.begin(), freq.end());
        for(int i = 0; i < 26; i++){
            sum += freq[i];
        }

        if(2*max - sum < 0){
            if(p%2==0)
                cout << 0;
            else
                cout << 1;
        }
        else
            cout << 2*max - sum;
        
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
}