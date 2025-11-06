class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;
        while (i < n) {
            char currentChar = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == currentChar) {
                i++;
                cnt++;
            }
            chars[write++] = currentChar;
            if (cnt > 1) {
                string countStr = to_string(cnt);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};