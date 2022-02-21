// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l =1;
        int r= n;
        long long int mid;
        while(l<=r)
        {
            mid = l+(r-l)/2;// To avoid overflow
            if(isBadVersion(mid)==true)
            {
                if(isBadVersion(mid-1)==false)
                   return mid;
                else
                r=mid-1;
            }
            if(isBadVersion(mid)==false)
            {
                l=mid+1;
            }
        }
        return -1;
    }
};