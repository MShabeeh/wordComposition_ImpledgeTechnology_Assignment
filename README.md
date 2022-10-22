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
 
 
 Approach
 
 Intuition and Algorithm
 
A concatenated word must be formed by 2 or more shorter words. We will iterate through each word and see if this is a concatenated word for first and second largest and find the time taken to process the input file.

Let's try for a dynamic programming (DP) solution. Approaching steps
1.Chrono header is added for find the current time, we find the current time in starting and ending stage subtracting which we got the time taken to process the file.

2.File is read and all element of file is stored in a vector v.

3. Unordered_set is used to remove duplication of the variable.

4. V is sorted in descending order and now each element of v is searched if it is created by concatenating with more than one word and if it is found than it is printed out and count is increased by one when count become 2 the loop breaks.

5.The searching of concatenation is done through top-down DP with memoization.Its code is defining the approach.

6.At the end processing time is calculated and printed.
