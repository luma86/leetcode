int maxSubArray(vector<int>& nums) {  
        if(nums.size() < 1) {
            return 0;
        }
        int sum = nums[0];
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(sum < 0) {
                sum = nums[i];
            }
            else {
                sum += nums[i];
            }
            if(sum > max) {
                max = sum;
            }
        }
        return max;
        
    }
