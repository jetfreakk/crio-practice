class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> hm;
        for(int i =0;i<nums.size();i++)
            hm[nums[i]]++;
        for(auto i : hm)
        {
            if(i.second>(nums.size()/2))
                return i.first;
        }
        return -1;
    }
};