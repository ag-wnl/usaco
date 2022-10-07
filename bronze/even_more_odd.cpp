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

// /http://www.usaco.org/index.php?page=viewproblem2&cpid=1084

int main(){
    int n, even = 0, odd = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int x; 
    	cin >> x;
    	if(x % 2 == 0){
            even++;
        }
    	else{
    		odd++;
    	}
    }
    //2 ods make 1 even; even + odd = odd

    //grouping odd cows if they more
    while(odd > even){
    	odd = odd - 2;
    	even++;
    }

    //grouping even cows if they more
    while(even > odd + 1){
    	even = odd + 1;
    }
    cout << odd + even << "\n";
}

//haze_12
