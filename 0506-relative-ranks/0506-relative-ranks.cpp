class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> heap;
        for(int i=0;i<score.size();i++){
            heap.push({score[i],i});
        }
        vector<string> res(score.size());
        int place=1;
        while(!heap.empty()){
            int index=heap.top().second;
            heap.pop();
            if(place==1){
                res[index]=("Gold Medal");
            }
            else if(place==2){
                res[index]=("Silver Medal");
            }
            else if(place==3){
                res[index]=("Bronze Medal");
            }
            else{
                res[index]=to_string(place);
            }place++;
        }
        return res;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna