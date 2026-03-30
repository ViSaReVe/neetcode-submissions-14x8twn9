class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // lets solve in o(n^2)
        // for every index lets compare 
        // to the next all and then if we see we return true
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return true;
                }
                
            }
        }
        return false;



    }
};






