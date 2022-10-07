#include<bits/stdc++.h>
 
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vi vector<int>
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//https://codeforces.com/contest/279/problem/B
int main(){
	int n,t;
	cin >> n >> t;
	std::vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	int r = 0, tot = 0, maxi = 0;
	for(int i=0; i<n; i++){
		while(r < n && tot + a[r] <=t){
			tot += a[r];
			r++;
		}
		maxi = max(maxi, r-i);
		tot -= a[i]; //taking left pointer forward
	}

	cout << maxi << "\n";
}	
//haze_12

