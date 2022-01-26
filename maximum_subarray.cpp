class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    int maxs = INT_MIN, maxtotal = 0;
 
    for (int i = 0; i < nums.size(); i++)
    {
        maxtotal = maxtotal + nums[i];
        if (maxs < maxtotal)
            maxs = maxtotal;
 
        if (maxtotal < 0)
            maxtotal = 0;
    }
    return maxs;
    
}};