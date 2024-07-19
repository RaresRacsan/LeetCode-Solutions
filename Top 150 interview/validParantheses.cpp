class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        int sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                Stack.push(s[i]);
            else {
                if(Stack.empty())
                    return false;
                if (s[i] == ')' && Stack.top() == '(')
                    Stack.pop();
                else if (s[i] == '}' && Stack.top() == '{')
                    Stack.pop();
                else if (s[i] == ']' && Stack.top() == '[')
                    Stack.pop();
                else
                    return false;
            }
        }
        if (!Stack.empty())
            return false;
        return true;
    }
};
