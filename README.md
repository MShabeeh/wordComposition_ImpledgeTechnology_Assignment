# wordComposition_ImpledgeTechnology_Assignment

Write a program that:  
1. Reads provided files (Input_01.txt and Input_02.txt) containing alphabetically sorted words list (one word per line, no spaces, all lower case)  
2. Identifies & display below given data in logs/console/output file  
 o longest compounded word 
 o second longest compounded word  
 o time taken to process the input file 
Note: A compounded word is one that can be constructed by combining (concatenating) shorter words also found in the same file 

Input files

1.Input_01

2.Input_02

Output

 1.
 Longest Compound Word: ratcatdogcat 
 
 Second Longest Compound Word: catsdogcats 
 
 
 2.
 Longest Compound Word: ethylenediaminetetraacetates 
 
 Second Longest Compound Word: electroencephalographically 
 
 
// Approach
 
 Intuition and Algorithm
 
A concatenated word must be formed by 2 or more shorter words. We will iterate through each word and see if this is a concatenated word.

Let's try for a dynamic programming (DP) solution. Given the input

Words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]
We are going to check, for example, if the word W = ratcatdogcat is concatenated.
Given a prefix of size K of the word W, dp[k] returns a boolean if this prefix can be formed by other words in the dictionary
