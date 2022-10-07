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


struct Time
{
	int l,r; //left and right
};

bool cmp(const Time &a, const Time &b){
	return a.l < b.l;  //sorting comparator
}

int main(){
	int n;
	cin >> n;
	vector<Time> arr(n);
	
	for(int i=0; i<n; i++){
		cin >> arr[i].l >> arr[i].r;
	}
	sort(all(arr), cmp); //acc to left values

	int tot = 0, right = 0, left = 0;
	for(int i=0; i<n; i++){
		if(arr[i].r > right){
			left = max(right,arr[i].l);
			tot+= arr[i].r - left;
			right = arr[i].r;
		}
	}

	int res = tot;
	Time last;
	last.l = arr[n-1].r;
	arr.pb(last);
	right = 0;
	for(int i=0; i<n; i++){
		int curr = min(arr[i+1].l, arr[i].r) - max(arr[i].l, right);
		res = min(res, curr);
		right = max(right, arr[i].r);
	}

	res = max(0,res);
	cout << tot-res << "\n";
}	
//haze_12