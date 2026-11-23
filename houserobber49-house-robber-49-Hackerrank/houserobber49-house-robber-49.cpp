#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    if(!(cin>>n)) return 0;
    vector<int>nums(n);
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int prev2=0;
    int prev1=0;
    for(int i=0;i<n;++i){
        int curr=max(prev1,nums[i]+prev2);
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1<<'\n';
    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna