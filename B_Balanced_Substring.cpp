#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    string str;
    vector<int> nums;
    cin >> p >> str;
    

    int freq1 = 0, freq0 = 0;
    for(int i = 0; i < p; i++){
        if(str[i] == '1'){
            freq1++;
            nums.push_back(1);
        }
        
        else{
            freq0++;          
            nums.push_back(-1);
        }
    }
    char check;

    if(freq0 > freq1)
        check = '1';
    else
        check = '-1';
    
    int sum = nums[0], st = 0;
    int q = INT_MIN;

    for(int i = 1; i < p; i++){

        sum += nums[i];
        if(nums[i] == check){
            if(sum != 0)
                sum -= nums[st];
                st++;
        }
        q = max(q,i-st+1);
    }

    cout << q;

}