#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int _ = 0; _ < n; _++){
        int p;
        string str;
        cin >> p >> str;
        set<char> v = {'a','e'}; 
        set<int> nums;
        
        for(int i = 2; i < p; i++){
            if(v.count(str[i])){
                nums.insert((2*i - 3)/2);
            }
        }

        for(int i = 0; i < p; i++){
            cout << str[i];
            if(nums.count(i))
                cout << ".";
        }

        cout << endl;
    
    }
}   


int main(){
    int n;
    cin >> n;
    solve(n);
}