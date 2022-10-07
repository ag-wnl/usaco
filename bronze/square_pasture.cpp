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

 
struct rect{			//struct for rectangle 
	int x1,y1,x2,y2;
};

 
int main(){
    rect a,b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2; //taking in rect
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;


    //taking maximum lengths possible to cover all
    int xSol = max(a.x2, b.x2) - min(a.x1, b.x1);
    int ySol = max(a.y2, b.y2) - min(a.y1, b.y1);
    int res = max(xSol, ySol);
    cout << res*res << "\n";
    
}
