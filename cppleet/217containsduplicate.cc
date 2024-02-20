class Solution {
pblic:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        for (int x : nums) {                    
            table[x]++;                         //increment value in the bucket
            if (table[x] > 1) return true;      //if bucket ever has more than 1 element, early return true
        }
        return false;
    }
};
