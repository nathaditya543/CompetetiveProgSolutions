class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        int p = s.length();
        
        if(p != t.length())
            return(false);

        int diff = 0;
        vector<int> map(26,0);

        for(int i = 0; i < p; i++){
            diff = (int)t[i] - (int)s[i];
            if(diff < 0)
                diff = 26 + diff;

            int count = diff + 26*map[diff];
            if(count > k)
                return(false);
            
            if(diff != 0)
                map[diff]++;
        }     
        return(true);
    }
};