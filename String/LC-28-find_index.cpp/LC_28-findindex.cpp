class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // If needle is empty
        if (m == 0) return 0;

        // Loop through haystack
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            // Check matching characters
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            // If full needle matched
            if (j == m) {
                return i;
            }
        }
        return -1;
    }
};

        