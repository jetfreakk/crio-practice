class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        ans[temperatures.size()-1]=0;
        int fp = 0, count;
        for(int i =0;i<temperatures.size();i++)
        {
            count  = 1;
            fp = temperatures[i];
            for(int j = i+1;j<temperatures.size();j++)
            {
             if(temperatures[j]<=fp) 
                 count++;
            else
            {
                ans[i]=count;
                break;
            }
            }
        }
        return ans;
    }
};