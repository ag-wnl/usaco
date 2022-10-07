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

//the 8 queens problem, input given a,b position of 1 queen
 

int row[9], a, b,cnt = 0;

bool place(int col, int tryrow){
	for(int prev = 1; prev < col; prev++){
		if(row[prev]==tryrow || (abs(row[prev]-tryrow) == abs(prev-col))){
			return false; //cant place it here
		}
	}
	return true;
}

void dfs(int col){
	for(int tryrow = 1; tryrow <=8; tryrow++){
		if(place(col, tryrow)){
			row[col] = tryrow;
			if(col==8 && row[b]==a){
				cnt++;
			}else{
				dfs(col + 1);
			}
		}
	}
}

int main(){
	cin >> a >> b;
	memset(row, 0 , sizeof row);
	dfs(1); //starting from column 1
	cout << cnt;
}

//haze_12
