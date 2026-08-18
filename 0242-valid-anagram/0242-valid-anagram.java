class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        HashMap<Character, Integer> first = new HashMap<>();
        HashMap<Character, Integer> second = new HashMap<>();
        for (char ch : s.toCharArray()) {
            first.put(ch, first.getOrDefault(ch, 0) + 1);
        }
        for (char ch : t.toCharArray()) {
            second.put(ch, second.getOrDefault(ch, 0) + 1);
        }
        for (char ch : first.keySet()) {
            if (!first.get(ch).equals(second.get(ch))) {
                return false;
            }
        }
        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna