class Solution {
public:
    bool isValid(string s) {

        vector<char> dynamicStack;   // string → char

        int N = s.size();

        for (int i = 0; i < N; i++) {

            char currentChar = s[i];   // declare variable

            if ( (currentChar == '(') || 
                 (currentChar == '{') || 
                 (currentChar == '[') ) 
            {
                dynamicStack.push_back(currentChar);
            }
            else {

                 if (dynamicStack.empty()) {
        return false;
    }

                if ( (currentChar == '}' && dynamicStack.back() == '{') ||
                     (currentChar == ')' && dynamicStack.back() == '(') ||
                     (currentChar == ']' && dynamicStack.back() == '[') )
                {
                    dynamicStack.pop_back();
                }
            }
        }

        if (dynamicStack.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
