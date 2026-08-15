class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int>m;
        int left=0,maxLength=0;
         
        for(int right=0;right<s.size();right++)
        {
            if(m.find(s[right])!=m.end())
            {
            left=max(left, m[s[right]] + 1);
            }
            m[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);           
          
        }

        return maxLength;
    }
};