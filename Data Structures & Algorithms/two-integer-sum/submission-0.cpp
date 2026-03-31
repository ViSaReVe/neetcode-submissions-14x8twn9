class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //nums array and int target 
      // return i and j -> nums[i]+nums[j]==target
      //and i!=j  
      //assume only 1 pair per example
      // samller index first 
      // brute force approach would be for each element check all except that index 
      // check the condition is met 

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[i]+nums[j]==target && i!=j){
                return {i,j};
            }
        }

    
    }
    
    }
};
