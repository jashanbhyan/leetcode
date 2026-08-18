# [Minimum Replacements to Make Anagram](https://www.geeksforgeeks.org/problems/min-manipulations-to-make-strings-anagram1421/1)
## Easy
Given two lowercase strings s1 and s2 of equal length, find the minimum number of steps required to make them anagrams of each other.&nbsp; In one step, you can change any single character in either string to any other lowercase English letter. Characters cannot be inserted or deleted.
Examples:
Input: s1 = "aba", s2 = "baa"
Output: 0
Explanation: Both strings contain the same characters with the same frequencies, so they are already anagrams. Hence, no changes are required and the answer is 0.
Input: s1 = "ddcf", s2 = "cedk"
Output: 2
Explanation: The character frequencies in s1 are [d:2, c:1, f:1], while in S2 they are [c:1, e:1, d:1, k:1]. By changing 'e' to 'd' and 'k' to 'f' in S2, both strings will have the same character frequencies and become anagrams. Therefore, the minimum number of steps required is 2.

Constraints:1 ≤ s1.size() ≤ 105|s1| = |s2| = n|s| represents the length of the string s.