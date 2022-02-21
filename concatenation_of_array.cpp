// No loop
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        ans.insert(ans.end(),nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
        
    }
};

//Loop
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int i =0;i<nums.size();i++)
            ans.push_back(nums[i]);
        return ans;
    }
};