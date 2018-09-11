class Solution {
public:
vector<int> array;
map<int,int> maxMap;

int compare(int index){
  
    int maxindex=array.size()-1;
    
    if(maxMap.find(index) != maxMap.end() )
    return maxMap[index];
    
    if(index+2>maxindex)
    maxMap[index]= array[index];
    else if(index+3>maxindex)
    maxMap[index]= array[index]+array[index+2];
    else
    maxMap[index]= array[index]+max(compare(index+2),compare(index+3));

    
    return maxMap[index];
}

    int rob(vector<int>& nums) {
        array=nums;
        
        if (nums.size()<1)
        return 0;
        else if (nums.size()==1)
        return nums[0];
  
        return max(compare(0),compare(1));

   

        
    }
};
