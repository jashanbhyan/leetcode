class WordDictionary {
private:
    vector<string> st;
public:
    WordDictionary() {
        
    }
    void addWord(string word) {
        st.push_back(word);
    }
    bool search(string word) {
        for(auto &s : st) {
            if(word.size() == s.size()) {
                int i = 0;
                for(auto &ss: s) {
                    if(ss == word[i]) {}
                    else if(word[i] == '.') {}
                    else break;
                    i++;
                }
                if(i == s.size()) return true;
            }
        }
        return false;
    }
};
/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna