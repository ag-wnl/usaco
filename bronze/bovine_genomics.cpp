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

 
int n,m, ans = 0;
string spotty[100],plain[100];

bool solve(int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(spotty[i][m]==plain[j][m]) //returns flase for those locations that dnt explain spottiness	
				return false;
		}
	}
	return true;
}
int main(){

	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> spotty[i];
	}
	for(int i=0;i<n;i++){
		cin >> plain[i];	
	}
	for(int i=0;i<m;i++){
		if(solve(i))ans++;  //if true then we ++
	}
	cout << ans << "\n";
	return 0;
}

//haze_12
