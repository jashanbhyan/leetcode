class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i=0;
        queue<int> qu;
        for (int x : students) {
            qu.push(x);
        }
        int count=0;
        while(i<sandwiches.size()&&count!=qu.size()){
            if(qu.front()==sandwiches[i]){
                qu.pop();
                i++;
                count=0;
            }
            else{
                qu.push(qu.front());
                qu.pop();
                count++;
            }

        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna