class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            
       unordered_map<int,int>hm; 
        for(int i = 0;i<nums.size();i++)
            hm[nums[i]]++;
        for(auto i : hm)
        {
            if(i.second>=2)
                return i.first;
        }
        return -1;
    }
};