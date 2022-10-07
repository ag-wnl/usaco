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

//https://cses.fi/problemset/task/1163

int main(){
	
	int x, n;
	cin >> x >> n;
	
	set<int> lit{0,x}; //only 2 elemnts initially 0 and x
	multiset<int> dis{x}; // only x initially (max distance), stores distance gaps
	//using multiset caus distances can be same sometimes so yea gotta store lol

	for(int i=0; i < n; i++){
		int pos; cin >> pos;

		auto it = lit.upper_bound(pos);
		auto it1 = it;
		--it1;

		dis.erase(dis.find(*it - *it1));
		dis.insert(pos - *it1);
		dis.insert(*it - pos);
		lit.insert(pos);

		auto ans = dis.end(); //caus max distance gap is max value in multiset
		--ans;
		cout << *ans  << " ";
	}


}
//haze_12

