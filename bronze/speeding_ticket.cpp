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
	int n, m, pos = 1, res = 0;
	cin >> n >> m;
	vector<int> lim(101);
	for (int i = 0; i < n; i++)
	{
		int seg, limi;
		cin >> seg >> limi;
		for (int j = 0; j < seg; j++)
		{
			lim[pos++] = limi;
		}
	}
	pos = 1; //resetting pointer
	for (int i = 0; i < m; ++i)
	{
		int segi, sped;
		cin >> segi >> sped;
		for(int j = 0; j < segi; j++){
			if(sped > lim[pos]){
				res = max(res, sped - lim[pos]);
			}
			pos++;
		}
	}
	cout << res << "\n";
}

//haze_12
