class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> ump;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (ump.find(target - nums[i]) != ump.end())
            {
                ans.push_back(i);
                ans.push_back(ump[target - nums[i]]);
            }
            else
            {
                ump[nums[i]] = i;
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};