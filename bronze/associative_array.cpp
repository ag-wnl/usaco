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
const int MAXN = 200200;

 
int main(){
	int q;
	cin >> q;
	map<ll,ll> mp;
	for(int i = 0; i < q; i++){
		int ch;
		cin >> ch;
		if(ch==0){
			ll key, value;
			cin >> key >> value;
			mp[key] = value;
		}else{
			ll key;
			cin >> key;
			cout << mp[key] << "\n";
		}
	}  
	return 0;
}

//haze_12
