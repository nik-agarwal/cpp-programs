// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.

// Sample Input 1 :
// 2
// 2
// 3
// Sample Output 1 :
// 2
// 3


int countDistinctWayToClimbStair(long long nStairs)
{
    //  Write your code here.
	if(nStairs<0)
		return 0;
	if(nStairs==0)
		return 1;
	
	long long s = countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2);
	return s;

}