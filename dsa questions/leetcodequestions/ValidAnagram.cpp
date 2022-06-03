// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

// ans is

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end()); // sort the first string
        sort(t.begin(),t.end());  // sort the second string
        for(int i=0;i<=s.length();++i){
            if(s[i]!=t[i])       // check the character of each string
                return false;
        }
        return true;
    }
};
