class Solution {
public:
    string removeSpaces(string s) {
        int n = s.size();
        int i = 0, j = 0;
        while (j < n) {
            if (s[j] != ' ' || (j != 0 && s[j - 1] != ' ')) {
                s[i] = s[j];
                i++;
            }
            j++;
        }
        if (s[i - 1] == ' ')
            i--;
        return s.substr(0, i);
    }

    string reverseWords(string s) {
        s = removeSpaces(s);
        int n = s.size();
        int end = 0;
        while (end < n) {
            int start = end;
            while (end < n && s[end] != ' ')
                end++;
            reverse(s.begin() + start, s.begin() + end);
            end++;
        }
        reverse(s.begin(), s.end());
        return s;    
    }
};