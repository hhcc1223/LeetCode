class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mapp = {};
        vector<int> res = {0, 1};
        for(int i = 0; i < nums.size(); i++)
        {
            if(mapp.find(nums[i]) == mapp.end())
            {
                mapp[target - nums[i]] = i;
            }
            else
            {
                vector<int> res = {i, mapp[nums[i]]};
                return res;
            }
        }
        return res;
    }
};
