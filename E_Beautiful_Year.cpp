#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    string x = to_string(n);
    unordered_set<int> st;
    for(auto i: x){
        st.insert(i);
    }

    if(st.size() == 4)
        return false;
    
    return true;
}

int main(){
    int n;
    cin >> n;
    n++;
    while(check(n)){
        n++;
    }
    cout << n << endl;
}