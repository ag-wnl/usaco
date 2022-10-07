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

	int a,b,c;
	cin >> a >> b >> c;
	int x1,x2,diff;
	x1 = abs(b-a); x2 = abs(c-b);
	diff = min(x1,x2);
	//the min no of moves = 0 if consecutive i.e diff = 1
	//1 move if diff = 2 i.e third no can be placed in b/w
	//2 if none of the above

	//max moves = max differnce in no.s - 1 moves
	//i drew this case to understand these patterns

	if(diff == 1){
		cout << 0 << "\n";
	}
	else if(diff == 2){
		cout << 1 << "\n";
	}
	else{
		cout << 2 << "\n";
	}
	int maxi = max(x1,x2) -1;
	cout << maxi;
}
//haze_12
