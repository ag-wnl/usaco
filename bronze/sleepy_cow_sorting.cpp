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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=892

//for ad hoc problems always draw observations
//in test cases
 
int main(){
    //look at end part of array of cows
    //check if last i elements of array are sorted
    //the no. of steps  = n - i
    //had to draw observations -> AD HOC lol

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    }
    int res = n - 1; //if none are sorted
    for(int i = n-2; i >= 0; i--){
    	if(arr[i] < arr[i+1]) res = i; //checking if sorted
    	else{
    		break;
    	}
    }
    cout << res << "\n";
}

//haze_12
