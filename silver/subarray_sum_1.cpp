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

//https://cses.fi/problemset/task/1660

int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int tot=0, res = 0;
	for(int left=0, right=0; right<n; right++){
		tot+=a[right];
		while(tot>x){
			tot-= a[left];
			left++;
		}
		if(tot==x) res++;
	}
	cout << res << "\n";

}	
//haze_12

