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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=855

const int n = 3;

int cap[n], milk[n];

void put(int i, int j){
	int amt = min(milk[i], cap[j]-milk[j]);
	milk[i] = milk[i] - amt;
	milk[j] = milk[j] + amt;
}
 
int main(){
	for(int i = 0; i < n; i++){
		cin >> cap[i] >> milk[i];
	}
	for(int i = 0; i < 100; i++){
		put(i%n , (i+1)%n); //cyclic
	}
	for(int i = 0; i < n; i++){
		cout << milk[i] << "\n";
	}
	return 0;
}

//haze_12
