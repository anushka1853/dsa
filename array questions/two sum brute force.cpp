class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 

      //leetcode solution for brute force approach for two sum

        int n = nums.size();

        vector<int> ans;

        for ( int i=0; i < n; i++){
            for( int j = i+1; j < n;  j++){
                if(nums[i]+nums[j] == target){

                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;

                }
            }
        }
    
    return {}; //return empty vector 

    }
};
