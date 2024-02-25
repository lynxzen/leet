class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            switch(c) {
                case '(':
                case '{':
                case '[':
                    stack.push(c);  //push any opening paren
                    break;
                case ')':           //if stack empty or is not a match -> false
                    if (stack.empty() || stack.top() != '(') return false;
                    stack.pop();
                    break;
                case '}':
                    if (stack.empty() || stack.top() != '{') return false;
                    stack.pop();
                    break;
                case ']':
                    if (stack.empty() || stack.top() != '[') return false;
                    stack.pop();
                    break;
            }
        }
        return stack.empty();       //prevents single open paren case
    }
};
