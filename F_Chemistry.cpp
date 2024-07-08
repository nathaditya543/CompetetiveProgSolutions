#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        map<char,int> mp;
        int p,k;
        string str;
        cin >> p >> k >> str;
        
        for(int j = 0 ; j < p; j++){
            mp[str[j]]++;
        }

        int flag = 0;
        int sum = 0;
        for(auto j : mp){
            if(j.second % 2 != 0 && flag == 0)
                flag = 1;

            else if(j.second % 2 != 0 && flag !=0)
                sum = sum + j.second;
        }

        if(k-sum >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}