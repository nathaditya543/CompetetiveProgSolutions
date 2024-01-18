class Solution {
public:
    map<char,int> get_map(string str){
        map<char, int> mp;
        for(char i: str){
            if(mp.find(i) == mp.end())
                mp[i] = 1;
            else
                mp[i]++;
        }

        return mp;
    }

    template<typename Map>
    bool map_compare(Map &lhs, Map &rhs){
        return lhs.size() == rhs.size() && equal(lhs.begin(), lhs.end(), rhs.begin());
    }
    
    bool isAnagram(string s, string t) {
        map<char,int> mps = get_map(s);
        map<char,int> mpt = get_map(t);
        return map_compare(mps, mpt);
    }
};
