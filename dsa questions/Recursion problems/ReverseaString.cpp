// You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. 
// You have to find the reverse of the string.
// abcde
// edcba

void reverse (string& str,int s,int e){
	if(s>e)
		return;
	swap(str[s++],str[e--]);
	reverse(str,s,e);
}

string reverseString(string str)
{
	// Write your code here.
	reverse(str,0,str.length()-1);
	return str;
}
