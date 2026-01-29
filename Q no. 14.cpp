#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  // No strings
        
        // Take the first string for reference
        string prefix = strs[0];
        
        // Compare with remaining strings
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            // Compare prefix with current string
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                j++;
            }
            // Shorten prefix
            prefix = prefix.substr(0, j);
            
            // If at any point prefix becomes empty, return ""
            if (prefix.empty()) return "";
        }
        
        return prefix;
    }
};
