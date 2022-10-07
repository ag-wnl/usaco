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

int main(){
    int n, tot=0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		tot+= arr[i];
	}
	int res = MAXN;
	for(int i = 0; i < (1<<n); i++){ //generating subsequence
		int sub = 0;
		for(int b = 0; b < n; b++){
			if(i & (1<<b)) sub += arr[b]; //finds sum of current subsequence
		}
		res = min(res, abs(tot - sub -sub));
	}
	cout << res << "\n";
	return 0;

}

//haze_12

//recursive way to solve this
// int n; ll weights[20];

// ll solve(int i, ll s1, ll s2){
// 	if(i == n){
// 		return abs(s1 - s2);
// 	}
// 	return min(solve(i + 1, s1 + weights[i], s2),
// 			solve(i + 1, s1, s2 + weights[i]));
// }

// int main() {
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> weights[i];
// 	}
// 	cout << solve(0, 0, 0) << "\n";
// }
