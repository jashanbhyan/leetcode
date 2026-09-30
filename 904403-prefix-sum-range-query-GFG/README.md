# [Prefix Sum Range Query](https://www.geeksforgeeks.org/problems/prefix-sum-range-query/1)
## Medium
Given an array arr[] of integers and a list of q queries queries[][], where each query is in the form [L, R], compute the sum of elements from index L to R (both inclusive) for each query.
Examples:
Input: arr[] = [2, 4, 6, 8, 10], queries[][] = [[1, 3], [0, 2]]Output: [18, 12]Explanation:Query [1, 3] -&gt; 4 + 6 + 8 = 18Query [0, 2] -&gt; 2 + 4 + 6 = 12
Input: arr[] = [5, 1, 3, 2], queries[][] = [[0, 1], [2, 3]]Output: [6, 5]Explanation:Query [0, 1] -&gt; 5 + 1 = 6
Query [2, 3] -&gt; 3 + 2 = 5
