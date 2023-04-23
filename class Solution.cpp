class Solution 
{
    public:
        int maximumUniqueSubarray(vector<int>& nums) 
        {
            int i = 0, sum = 0;
            vector<int> vec;
            while(i < nums.size())
            {
                while(find(vec.begin(), vec.end(), nums[i]) == vec.end() && i < nums.size())
                {
                    vec.push_back(nums[i]);
                    i++;
                }
                sum = max(sum, accumulate(vec.begin(), vec.end(), 0));
                if(i == n)
                    break;
                while(*vec.begin() != nums[i])
                {
                    vec.erase(vec.begin());
                }
                vec.erase(vec.begin());
            }
            return sum;
        }
};