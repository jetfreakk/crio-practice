
//Brute force solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       for(int i =0;i<nums.size();i++)
       {
           nums[i]*=nums[i];
       }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

// Within O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> ans (nums.size());
        int l = 0; int r = nums.size()-1;
        for(int k = nums.size()-1;k>=0;k--)
            {
            if(abs(nums[r])>abs(nums[l]))
                ans[k]=nums[r]*nums[r--];
            else
                ans[k]=nums[l]*nums[l++];
        }
        return ans;
    }
};