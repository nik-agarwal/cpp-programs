// You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X.
// Write a function to search this element in the given input array/list using 'Binary Search'.
// Return the index of the element in the input array/list. 
// In case the element is not present in the array/list, then return -1.


int solve(int *input, int s,int e,int val){
	
	if (s>e){
		return -1;
	}
	int mid = s + (e-s)/2;
	if(input[mid]==val)
		return mid;
	if(input[mid]<val)
		return solve(input,mid+1,e,val);
	else
		return solve(input,s,mid-1,val);
}


int binarySearch(int *input, int n, int val)
{
    //Write your code here
	int ans = solve(input,0,n-1,val);
	
}
