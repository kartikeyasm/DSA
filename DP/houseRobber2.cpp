//https://www.naukri.com/code360/problems/house-robber_839733?interviewProblemRedirection=true&search=house%20rob&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav


//Crete 2 answers 1st excluding 1st house and second excluding last house
/* 
#include <bits/stdc++.h> 

long long int solve(vector<int> &houses)
{
    int n = houses.size();
    if(n==0){
        return 0;
    }
    if(n==1){
        return houses[0];
    }
	long long int ans = houses[0];
	long long int prev = ans;
	long long int prev2 = 0;
	for(int i=1; i<n; i++){
		long long int pick = houses[i];
		if(i>1){
			pick += prev2;
		}
		long long int notPick = prev;
		ans = max(pick, notPick);
		prev2 = prev;
		prev = ans;
	}
	return ans;

}


long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n = valueInHouse.size();
    if(n==1){
        return(valueInHouse[0]);
    }
    vector<int> temp1, temp2;
    for(int i=0; i<n; i++){
        if(i!=0){
            temp1.push_back(valueInHouse[i]);
        }
        if(i!=n-1){
            temp2.push_back(valueInHouse[i]);
        }
    }
    return max(solve(temp1) , solve(temp2));

} 
*/