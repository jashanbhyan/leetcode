class Solution {
public:
    int uniquePaths(int m, int n) {
        int big=std::max(m-1,n-1);
        double ans=1;
        for(int i=1;i<=std::min(m-1,n-1);++i){
            ans/=i;
        }
        for(int i=big+1;i<=m+n-2;++i){
            ans*=i;
            if(std::abs(ans-std::round(ans))<1e-7&&std::round(ans)!=0)ans=std::round(ans);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna