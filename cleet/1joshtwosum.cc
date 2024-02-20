/*
1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &vec, int target) {
	vector<int> result;
	for (size_t i = 0; i < vec.size(); i++) {
		for (size_t j = i+1; j < vec.size(); j++) {
			if (vec.at(i) + vec.at(j) == target) {
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}

int main() {
	vector<int> ex1 {2,7,11,15}, ans1 {0,1};
	vector<int> res1 = twoSum(ex1, 9);
	if (res1 == ans1) cout << "Test 1 passed." << endl;
	else cout << "Test 1 failed." << endl;
		
	vector<int> ex2 {3,2,4}, ans2 {1,2};
	vector<int> res2 = twoSum(ex2, 6);
	if (res2 == ans2) cout << "Test 2 passed." << endl;
	else cout << "Test 2 failed." << endl;

	vector<int> ex3 {3,3}, ans3 {0,1};
	vector<int> res3 = twoSum(ex3, 6);
	if (res3 == ans3) cout << "Test 3 passed." << endl;
	else cout << "Test 3 failed." << endl;
}
