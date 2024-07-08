#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    cin >> n;
    set<int> num_Set;
    int a,b,c;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b >> c;
            if(a == b)
                vec.push_back(c);
            else if(b == c)
                vec.push_back(a);
            else 
                vec.push_back(b);

    }
        for(int i : vec)
            cout << i << endl;
}