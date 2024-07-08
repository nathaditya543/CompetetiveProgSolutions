#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    int minx = 0, maxx = 0;

    for(int i = 0 ; i < n; i++){
        int val;
        cin >> val;
        if(val <= min){
            min = val;
            minx = i;
        }
        if(val > max){
           max = val;
           maxx = i;
        }
    }

    minx = (n-1) - minx;

    if(minx < maxx)
        minx-=1;

    cout <<  minx + maxx;




}