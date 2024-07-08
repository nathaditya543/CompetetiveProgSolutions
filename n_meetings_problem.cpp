//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector <pair<int,int>> vec;
        for(int i = 0 ; i < n; i++){
            vec.push_back({start[i],end[i]});
        }
        
        auto comp = [](pair<int,int> a, pair<int,int> b){
            if(a.second != b.second)
                return(a.second < b.second);
                
            return(a.first < b.first);
        };
        
        sort(vec.begin(), vec.end(), comp);
        int en = -1;
        int ctr = 0;
        for(int i = 0; i < n; i++){
            if(vec[i].first > en){
                ctr++;
                en = vec[i].second;
            }
        }

        return ctr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends