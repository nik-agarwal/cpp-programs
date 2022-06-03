// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.

// ans is :

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1=""; int j=0;
        for(int i=0;i<s.length();++i){
            if(iswalnum(s[i]))
                s1+=s[i];
        }
            int st=0;
            int e = s1.length()-1;
            while(st<=e)
            {
                if(s1[st]!= s1[e]){
                    return false;
                }
                else{
                    ++st;
                    --e;
                }
            }
           return true;
        
    }
};
