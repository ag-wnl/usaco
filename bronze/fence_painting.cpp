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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=567&lang=en

 
int main(){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    int tot = (b-a) + (d-c); //total painted
    int inter = abs(min(d,b) - max(c,a)); //intersection region
    cout << tot - inter << "\n";
}

//haze_12