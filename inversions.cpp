#include<bits/stdc++.h>
using namespace std;

int inv = 0;
void merge(int nums[], int st, int mid, int en){
    int n = mid - st + 1;
    int m = en - mid;

    int arr1[n];
    int arr2[m];

    for(int i = 0; i < n; i++){
        arr1[i] = nums[i + st];
    }
    for(int i = 0; i < m; i++){
        arr2[i] = nums[i + mid + 1];
    }
    
    int left = 0, right = 0;

    while(left < n && right < m){
        if(arr1[left] < arr2[right]){
            nums[st] = arr1[left];
            left++;
        }
        else{
            nums[st] = arr2[right];
            right++;
            inv++;
        }
        st++;
    }

    while(left < n){
        nums[st] = arr1[left];
        left++;
        st++;
    }

    while(right < m){
        nums[st] = arr2[right];
        right++;
        st++;
        inv++;
    }

}

void mergesort(int arr[], int st, int en){
    if(st < en){
        int mid = st + (en-st)/2;
        mergesort(arr, st, mid);
        mergesort(arr, mid+1, en);
        merge(arr, st, mid, en);
    }
}


int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergesort(arr,0,n-1);

    cout << "Sorted" << endl;
    for(auto i: arr)
        cout << i << " ";

    cout << endl << "Inversions = " << inv;
}