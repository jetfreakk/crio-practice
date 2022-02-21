class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long int k=0;;
        long long int newt = x;
        if(k>=0)
            while(newt>0)
            {
                k = k*10;
                k = k + newt%10;
                newt = newt/10;
                //cout<<k<<endl;
            }
        if(k==x)
            return true;
        else
            return false;
    }
};