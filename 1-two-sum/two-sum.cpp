class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int i;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(target==nums[i]+nums[j])
                {
                    // return {i,j};
                    ans.push_back(i);
                     ans.push_back(j);

                }
            }
        }
        // return {};
        return ans ;

    }
};