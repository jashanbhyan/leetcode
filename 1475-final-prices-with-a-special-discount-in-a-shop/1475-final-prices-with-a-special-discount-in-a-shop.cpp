class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> st;
        for(int i=0;i<prices.size();i++){
            while(!st.empty()&&prices[st.back()]>=prices[i]){
                prices[st.back()]-=prices[i];
                st.pop_back();
            }
            st.push_back(i);
        }
        return prices;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna