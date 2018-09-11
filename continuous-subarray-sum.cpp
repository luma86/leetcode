class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        
        if(nums.size()>10000)
        return false;
        
        for(int i=0;i<nums.size();i++)
        {
         
         for(int j=i;j<nums.size();j++)
         {
         sum+=nums[j];
         
         if(sum==0&&k==0&&j>i)
         return true;
         
         if(k!=0)
         if(sum%k==0&&j>i)
         {
         printf("sum %d\n",sum);
         return true;
         }
         
         }
         sum=0;
        }
        
        return false;
        
    }
};