//Simple solution using logic given
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ctd=0;
      for(int i = 0;i<nums.size()-1;i++)
      {
          for(int j = 1;j<nums.size();j++)
          {
              if(nums[i]==nums[j] and i<j)
                  ctd++;
          }
      }
        return ctd;
    }
};

//O(n) solution using map
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
                m[nums[i]]++;
            else
                m[nums[i]]=1;
        }
        for(auto i:m)
        {
            if(i.second>1)
               result+=((i.second-1)*i.second )/2;
        }
        return result;
    }
};