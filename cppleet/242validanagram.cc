class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;     //unequal length -> automatic false
        unordered_map<char, int> s_table, t_table;
        for (int i = 0; i < s.length(); i++) {
            s_table[s.at(i)]++;                         //increment letter count in both tables
            t_table[t.at(i)]++;
        }

        if (s_table != t_table) return false;           //tables different -> false
        return true;
    }
};
