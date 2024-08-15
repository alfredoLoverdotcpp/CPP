//Any other approach than Stack? 
//I thought of a Hashmap at first but it wouldn't know the order of these brackets. The map knows how many brackets exist but not their positions relative to one another.
/*Consider s = "([)]".
As we iterate:
(: Increment count for (.
[: Increment count for [.
): You would check if ( is open and decrement, but [ is still open.
]: You would check if [ is open and decrement.
Final Map State: The map might show that all brackets are "balanced" because the counts for (, ), [, and ] are all zero. 
However, the string is still invalid because the order of brackets is incorrect.*/

//Time Complexity: O(N) and Space Complexity: O(N)

class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                chars.push(s[i]);
            }
            if (s[i] == ')') {
                if (chars.empty() || chars.top() != '(') {
                    return false;
                }
                chars.pop(); 
            } else if (s[i] == '}') {
                if (chars.empty() || chars.top() != '{') {
                    return false; 
                }
                chars.pop();
            } else if (s[i] == ']') {
                if (chars.empty() || chars.top() != '[') {
                    return false;
                }
                chars.pop(); 
            }
        }
        return chars.empty();
    }
};
