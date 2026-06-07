/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int j=s.size();
        int count =0;
        while(count<=j){
        for(int i=count; i<s.size()-1; i++){
            if(s[count]==t[i]){
                s[count]=1;
                t[i]=0;
                count++;
            }
        }
    }
    if (count==s.size())
    return true;
    else
    return false;
}
};
// @lc code=end

