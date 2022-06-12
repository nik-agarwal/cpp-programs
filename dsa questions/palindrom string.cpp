// Given a string S, check if it is palindrome or not.

// Example 1:

// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome
// Example 2:

// Input: S = "abc" 
// Output: 0
// Explanation: S is not a palindrome

// ans is:-

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0;
	    int e = S.length()-1;
	    while(i<=e){
	        if(S[i++]!=S[e--])
	          return 0;
	          
	    }
	    return 1;
	}

};
