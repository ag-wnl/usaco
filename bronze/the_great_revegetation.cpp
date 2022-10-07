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


int main(){
	int n,m;
	cin >> n >> m;
	vector<int> v[n+1];
	vector<int> gras;
	set<int> arr = {1,2,3,4};
	for(int i=0; i<m; i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		gras.push_back(0); //just initialising values
	}

	for(int i=1; i<n; i++){
		sort(all(v[i])); //sorting all internal values
	}

	for(int i=0; i<=n; i++){
		for(int j=0; j < v[i].size(); j++){
			arr.erase(gras[v[i][j]]);
		}
		for(auto x : arr){
			gras[i] = x;
			break;
		}
		arr = {1,2,3,4}; //making it original again
	}
	for(int i=1; i<=n; i++){
		cout << gras[i];
	}	
}
//haze_12
