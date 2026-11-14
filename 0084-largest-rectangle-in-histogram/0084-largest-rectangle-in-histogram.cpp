class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> left(n+1,-1);
        vector<int> right(n+1,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i]= st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        int mx=0;
        for(int i=0;i<n;i++){
            int area = (right[i]-left[i]-1)*heights[i];
            mx= max(mx,area);
        }

        return mx;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna