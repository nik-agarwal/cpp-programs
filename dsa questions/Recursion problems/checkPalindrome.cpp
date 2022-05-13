// check palindrome is present or not in a string 
// if we reverse the string and compare it with the original string then if it is same as a original string then it is a palindrome else it is not a palindrome

#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string str,int s,int e){
   
   if(s>e){
       return true;
   }
   if(str[s]!=str[e]){
       return false;
   }
   else{
       return ispalindrome(str,++s,--e);
   }
}

int main()
{
    string s;
    cin>>s;
    bool palindrome = ispalindrome(s,0,s.size()-1);
    if(palindrome)
        cout<<"palindrome";
    else{
        cout<<"not palindrome";
    }
    return 0;    
}