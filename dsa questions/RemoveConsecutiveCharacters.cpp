// Remove Consecutive Characters 
// Basic Accuracy: 55.83% Submissions: 17659 Points: 1
// Given a string S delete the characters which are appearing more than once consecutively.

// Example 1:

// Input:
// S = aabb
// Output:  ab 
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// Similiar explanation for b at
// 4th position.


// ans:-

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
       string s1="";
       for(int i=0;i<S.size();++i){
           if(S[i]!=S[i+1])
           {
               s1.push_back(S[i]);
           }
       }
      return s1;
    }
};
