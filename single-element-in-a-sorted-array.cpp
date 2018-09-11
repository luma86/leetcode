class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
       if(nums.size()<1)
         return 0;           
        
         for(int i=0;i<nums.size();i++)
         { 
             
             if((i==nums.size()-1)||(nums[i]!=nums[i+1]))
                return nums[i]; 
             else
              i++;   
              
         }
        
        
        return 0;
        
    }
};