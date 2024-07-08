#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> w(n);
    for(int i = 0 ; i < n; ++i)
        cin >> w[i];

    sort(w.begin(), w.end());

    int left = 0;
    int right = n - 1;
    int ctr = 0;
    while(right >= left){
        if(w[right] + w[left] <= x){
            left++;
            right--;
        }
        else
            right--;
        ctr++;
    }

    cout << ctr;
}