class Solution {
public:
    bool isValid(string s) {

        vector<char> dynamicStack;

        int N = s.size();

        for (int i = 0; i < N; i++) {

            char currentChar = s[i];

            // Opening brackets
            if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
                dynamicStack.push_back(currentChar);
            }
            // Closing brackets
            else {

                // SAFETY CHECK: avoid stack.back() on empty stack
                if (dynamicStack.empty()) {
                    return false;
                }

                if ( (currentChar == '}' && dynamicStack.back() == '{') ||
                     (currentChar == ')' && dynamicStack.back() == '(') ||
                     (currentChar == ']' && dynamicStack.back() == '[') )
                {
                    dynamicStack.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        // Stack must be empty at the end
        return dynamicStack.empty();
    }
};
