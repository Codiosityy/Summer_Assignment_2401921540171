class Solution {
public:
    // Group strings by their sorted character signature.
    // Time: O(n * k log k), Space: O(n * k)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        groups.reserve(strs.size());

        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> result;
        result.reserve(groups.size());

        for (auto& [key, group] : groups) {
            result.push_back(move(group));
        }

        return result;
    }
};
