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
    int T;
    cin>>T;
    while(T--){
        int w,h,w2,h2,a=0,b=0,x1,y1,x2,y2,d1,d2;
        cin >> w >> h;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w2 >> h2;
        if(w >= w2 + x2 - x1){
        	d1 = min(max(0,w2-x1), max(0,w2-(w-x2))); //x-axis
        	a++;
        }
        if(h >= h2 + y2 - y1){
        	d2 = min(max(0,h2-y1), max(0,h2-(h-y2))); //y-axis
        	b++;
        }
        if(a==0 && b==0) cout << -1 << "\n";
        else{
        	cout << min(d1,d2) << "\n";
        }
    }
    return 0;      
}

//haze_12
