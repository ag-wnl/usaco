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

//https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    } 
    int cnt = 0;
    for(int i = 0; i < n; i++){
    	for(int j = 0; j  < n - 1; j++){
    		if(arr[j] > arr[j+1]){
    			swap(arr[j], arr[j+1]);
    			cnt++;
    		}
    	}
    }
    cout << cnt << "\n";
    cout << arr[0] << "\n";
    cout << arr[n-1] << "\n";     
}

//haze_12
