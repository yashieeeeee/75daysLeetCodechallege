class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
      vector<int> merged;
       for(int i=0;i<nums1.size();i++)
            {
               merged.push_back(nums1[i]);
            }
        for(int j=0;j<nums2.size();j++)
            {
               merged.push_back(nums2[j]);
            }
            sort(merged.begin(),merged.end());
           int n=merged.size();
            if(n%2 ==1) 
             return merged[n/2];
            else
             return (merged[(n/2)-1] +merged[n/2])/2.0 ;           
    }
};