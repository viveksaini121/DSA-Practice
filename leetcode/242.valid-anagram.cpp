/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count =0;
        int freq[26];

        if (s.size() != t.size())
            return false;

        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        int n = sizeof(freq)/sizeof(freq[0]);
        for(int i=0; i<n; i++){
        if (freq[i]!=0)
        return false;
        }

        return true;
    }
};

// @lc code=end

