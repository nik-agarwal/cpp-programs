// Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence.
// old phone keypad dial

// Example 1:

// Input:
// S = "GFG"
// Output: 43334
// Explanation: For 'G' press '4' one time.
// For 'F' press '3' three times.

// ans is:-

#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    //code here.
    string ss;
    for(int i=0;i<S.length();++i){
          if(S[i]=='A')
          ss+="2";
          else if(S[i]=='B')
          ss+="22";
          else if(S[i]=='C')
          ss+="222";
          else if(S[i]=='D')
          ss+="3";
          else if(S[i]=='E')
          ss+="33";
          else if(S[i]=='F')
          ss+="333";
          else if(S[i]=='G')
          ss+="4";
          else if(S[i]=='H')
          ss+="44";
          else if(S[i]=='I')
          ss+="444";
          else if(S[i]=='J')
          ss+="5";
          else if(S[i]=='K')
          ss+="55";
          else if(S[i]=='L')
          ss+="555";
          else if(S[i]=='M')
          ss+="6";
          else if(S[i]=='N')
          ss+="66";
          else if(S[i]=='O')
          ss+="666";
          else if(S[i]=='P')
          ss+="7";
          else if(S[i]=='Q')
          ss+="77";
          else if(S[i]=='R')
          ss+="777";
          else if(S[i]=='S')
          ss+="7777";
          else if(S[i]=='T')
          ss+="8";
          else if(S[i]=='U')
          ss+="88";
          else if(S[i]=='V')
          ss+="888";
          else if(S[i]=='W')
          ss+="9";
          else if(S[i]=='X')
          ss+="99";
          else if(S[i]=='Y')
          ss+="999";
          else if(S[i]=='Z')
          ss+="9999";
          else 
          ss+="0";
    }
     return ss;
}
