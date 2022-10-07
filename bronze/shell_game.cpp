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
	int n;
	cin >> n;

	
	vector<int> pos(3);
	for (int i = 0; i < 3;i++) {
		pos[i] = i; //0,1,2 ; 0 based indexing
	}
	
	
	vector<int> cnt(3);
	for (int i = 0; i < n; i++) {
		int a, b, g;
		scanf("%d %d %d", &a, &b, &g);
		a--, b--, g--;
		swap(pos[a], pos[b]);
		cnt[pos[g]]++;
	}
	
	cout << max({cnt[0], cnt[1], cnt[2]});
	return 0;
}

//haze_12
