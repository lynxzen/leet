#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int longest = 0;
	for (int i = 0; i < s.length(); i++) {
		unordered_map<char,char> substr;
		int temp = 0;
		for (int j = i; j < s.length(); j++) {
			if (auto search = substr.find(s.at(j)); search != substr.end()) break;
			substr.insert(make_pair(s.at(j), s.at(j)));
			temp++;
		}
		if (temp > longest) longest = temp;
	}
	return longest;
} 

int main() {
	string t1 = "abcabcbb", t2 = "bbbbb", t3 = "pwwkew";
	cout << "Input s = \"" << t1 << "\"" << endl; 
	cout << "Output: " << lengthOfLongestSubstring(t1) << endl;
	if (lengthOfLongestSubstring(t1) == 3) cout << "Test passed!" << endl;
	else cout << "Test failed." << endl;
	cout << '\n';
	
	cout << "Input s = \"" << t2 << "\"" << endl; 
	cout << "Output: " << lengthOfLongestSubstring(t2) << endl;
	if (lengthOfLongestSubstring(t2) == 1) cout << "Test passed!" << endl;
	else cout << "Test failed." << endl;
	cout << '\n';

	cout << "Input s = \"" << t3 << "\"" << endl; 
	cout << "Output: " << lengthOfLongestSubstring(t3) << endl;
	if (lengthOfLongestSubstring(t3) == 3) cout << "Test passed!" << endl;
	else cout << "Test failed." << endl;
}

/*
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
