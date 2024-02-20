#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int carry = 0, sum = 0;
	ListNode* prev = new ListNode() , *res = prev;
	while (l1 || l2) {
		sum = carry;
		if (l1) {                           //L1 exists, add it to sum
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2) {                           //L2 exists, add it to sum
			sum += l2->val;
			l2 = l2->next;
		}
		if (sum >= 10) {                    //L1 + L2 >= 10, find carry and sum
			carry = sum / 10;
			sum %= 10;
			res->next = new ListNode(sum);
			res = res->next;
		}
		else {                              //Default case, put sum in a node
			res->next = new ListNode(sum);
			res = res->next;
			carry = 0;
		}
	}
	if (carry) {                            //Handle extra carry at the end.
		res->next = new ListNode(carry);
	}
	return prev->next;
}

int main() {
	
}

/*
Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/
