class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strings = strs;
        unordered_map<string, vector<string>> angMap;
        vector<vector<string>> list;

        for(int i = 0; i < strings.size(); i++){
            sort(strings[i].begin(), strings[i].end());
        }

        for(int i = 0; i <  strs.size(); i++){
            angMap[strings[i]].push_back(strs[i]);
        }

        for(auto i: angMap)
            list.push_back(i.second);

        return list;
    }
};
