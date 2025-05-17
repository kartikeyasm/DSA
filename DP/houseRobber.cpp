//similar qustion of => maximumNonAdjacentSum.cpp 

//https://www.naukri.com/code360/problems/loot-houses_630510?interviewProblemRedirection=true&search=house%20rob&leftPanelTabValue=SUBMISSION&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav


/* 
int maxMoneyLooted(vector<int> &houses, int n)
{
	int ans = houses[0];
	int prev = ans;
	int prev2;
	for(int i=1; i<n; i++){
		int pick = houses[i];
		if(i>1){
			pick += prev2;
		}
		int notPick = prev;
		ans = max(pick, notPick);
		prev2 = prev;
		prev = ans;
	}
	return ans;

} 
*/