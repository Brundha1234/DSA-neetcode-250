/*1. Iteration (Two Pass)*/
/*Time & Space Complexity
Time complexity: O(n)
Space complexity: O(n) for the output array.*/
//code:


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<2;++i){
            for(int num:nums){
                ans.push_back(num);
            }
        }
        return ans;
    }
};