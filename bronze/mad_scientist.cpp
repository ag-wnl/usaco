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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=1012

//here we have to take boolean to see no. of 
//mismatches, or else if we just count chars
//which are not same then we wont do it 
//efficiently, caus we can flip a whole substring
 
int main(){
    int n;
    cin >> n;
    string a,b;
    cin >> a;
    cin >> b;
    int cnt = 0;
    bool mismatch = false;
    for(int i = 0; i < n; i++){
    	if(a[i]!=b[i]){
            if(!mismatch){      
                mismatch = true;
                cnt++;
            }
        }else{
            mismatch = false;
        }
    }
    cout << cnt << "\n";      
}

//haze_12
