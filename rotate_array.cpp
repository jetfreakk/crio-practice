//Time limite exceeded

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0)
        {
        int tbc = nums[nums.size()-1];
        for(int i =nums.size()-1;i>0;i--)
        {
            nums[i]=nums[i-1];
        }
        nums[0]=tbc;
         k--;   
        }
    }
};

// Without extra space

class Solution {
public:
    void reverse(vector<int> &num,int low,int high)
    {
        while(low<high)
        {
            swap(num[low],num[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};