class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while (l < r) {
            //keep moving until a letter is read            
            while (!isalnum(s.at(l)) && l < r) l++;
            while (!isalnum(s.at(r)) && l < r) r--;

            //two letters found, check if they are the same
            if (toupper(s.at(l)) != toupper(s.at(r))) return false;     
            l++;
            r--;
        }
        return true;
    }
};
