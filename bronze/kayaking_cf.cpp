#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;

 

int main(){
	int n;
	cin >> n;
	n= n * 2;
	int w[n+1];
	for(int i = 0; i < n; i++){
		cin >> w[i];
	}
	int res = 100000;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			vector<int> v;
			for(int k = 0; k < n; k++){
				if(k!=i && k !=j){
					v.push_back(w[k]);
				}
			}
			sort(all(v));
			int temp = 0;
			for(int k = 0; k < v.size(); k+=2){
				temp += v[k+1] - v[k];
			}
			res = min(res, temp);
		}
	}
	cout << res << "\n";
}

//haze_12
