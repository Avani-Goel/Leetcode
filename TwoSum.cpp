//We can return vector as {}
//Important line::Every element only once, hence j loop starts from 1 and i loop ends with n-1
//Remember to add (i!=j) in the condition since the very element only once. Otherwise it will give error in where two elemens are repeated
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i,j;
        for (i=0; i<nums.size()-1; i++)
        {
            for (j=1; j<nums.size(); j++)
            {
                if ((nums[i]+nums[j])==target && (i!=j))
                {
                   return {i,j};
                }
            }
        }
        return {};
        
    }
};
