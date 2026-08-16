class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
     {
        vector<int>nums3;
        int len=nums1.size()+nums2.size();
        double median;
        for(int i=0;i<nums1.size();i++)
        {
            nums3.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++)
        {
            nums3.push_back(nums2[j]);
        }
        sort(nums3.begin(),nums3.end());
        

        int mid=len/2;
        if(len%2!=0)
        {
            median=nums3[mid];
        }
        else
        {
            median=(nums3[mid-1]+nums3[mid])/2.0;
        }
return median;
    }
};