#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//https://cses.fi/problemset/task/1625

//7x7 grid - >upper left to lower left - > 0,0 to 7,0
// we have 0 based indexing note

int f(int i, int j,vector<int> &dp){
	if(i==6 && j==0) return 1;
	if(i < 0 || j < 0 || i > 6 || j > 6) return 0;
	if(dp[i][j] != '$'){
		if(dp[i][j] == 'U') f(i-1, j, dp);
		if(dp[i][j] == 'D') f(i+1, j, dp);
		if(dp[i][j] == 'L') f(i, j-1, dp);
		if(dp[i][j] == 'R') f(i, j+1, dp);
	}
	int up = f(i-1, j, dp);
	int right = f(i, j+1, dp);
	int left = f(i, j-1, dp);
	int down = f(i+1, j, dp);
	return up + right + left + down; 

}
 
int main(){
	string s;
	cin >> s;
	int n = s.size();
	vector< vector<string> > dp;
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			s[j] = dp[i][j];
		}
	}

	cout << f(0, 0, dp);
}

//haze_12
