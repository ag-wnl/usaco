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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=787

//http://www.usaco.org/current/data/sol_rental_silver_jan18.html -> official analysis

//Firstly, we want to sell to shops that pay more per gallon of milk over shops that pay less per gallon of milk.
//Secondly, we want to rent cows that produce less milk over cows that produce more milk.
//Let f(i) be the maximum amount of money we can make just by using the milk from the i cows that produce the most milk,
//and let g(j) be the maximum amount of money we can make just by renting the j cows that produce the least milk. 
//We want to compute the maximum possible value of f(i)+g(N−i).\

bool cmp (const pair<int, int>& a, const pair<int, int>& b) {
	return a.ss > b.ss;
}

int main(){
	int n, m, r;
	cin >> n >> m >> r;
	
	std::vector<int> milk(n);
	for(int i=0; i<n; i++){
		cin >> milk[i];
	}
	
	vector<pair<int,int>> shops(m);
	for(int i=0; i<m; i++){
		cin >> shops[i].ff >> shops[i].ss;
	}	
	std::vector<int> rent(r);
	for(int i=0; i<r; i++){
		cin >> rent[i];
	}

	sort(rent.begin(), rent.end(), greater<int>());
	sort(shops.begin(), shops.end(), cmp); //sorts acc to price per gallon, higher to lower, as greedy will be used
	sort(milk.begin(), milk.end(), greater<int>());


	int maxi = -1e9;
	for(int i=0; i<n; i++){
		int pesos = 0, gallons = 0;
		for(int j=0; j<i; j++){
			gallons += milk[j];
		}

		for(int j=0; j<m; j++){
			int remove = min(gallons, shops[j].ff);
			pesos += remove * shops[j].ss;
			gallons -= remove;
			if(gallons==0){
				break;
			}
		}
		for(int j=0; j< min(n-i, r); j++){
			pesos += rent[j];
		}
		maxi = max(pesos, maxi);
	}

	cout << maxi << "\n";
	
}	
//haze_12

