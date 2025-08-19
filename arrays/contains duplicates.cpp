/*1. Brute Force
Time complexity: O(n^2)
Space complexity: O(1)*/

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};