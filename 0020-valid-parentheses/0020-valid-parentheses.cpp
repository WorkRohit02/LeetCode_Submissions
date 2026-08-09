class Solution {
public:
    bool isValid(string s) {

        stack<char> srt;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                srt.push(s[i]);
            } else {

                if (srt.empty()) return false;

                if (s[i] == ')' && srt.top() != '(') return false;
                if (s[i] == '}' && srt.top() != '{') return false;
                if (s[i] == ']' && srt.top() != '[') return false;

                srt.pop();
            }
        }

        return srt.empty();
    }
};