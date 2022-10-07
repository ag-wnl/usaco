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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=894

//we store degree of nodes 
//we need max degree + 1 types o grass
//caus 1 type of grass for all the neightbours
//of that node and 1 for the node itself
 
int main(){
	int n;
	cin >> n;
	vector<int> v(n+1); //i always do this to prevent overflow
	for(int i=0; i<n-1; i++){
		int x1, x2;
		cin >> x1 >> x2;
		v[x1]++; //increasing degrees of teh nodes
		v[x2]++;
	}
	int maxi = -1e9;
	for(int i=1; i<=n; i++){  //caus 1 based indexing in input
		maxi = max(maxi, v[i]);
	}
	cout << maxi + 1 <<"\n";

}
//haze_12
