#include<bits/stdc++.h>
 
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vi vector<int>
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//http://www.usaco.org/index.php?page=viewproblem2&cpid=940

int main(){
	int n;
	cin >> n;
	vector<int> outgoin(n+1); //keeping no. of outdegrees for a node
	for(int i = 0; i < n - 1; i++){
		int a,b;
		cin >> a >> b;
		outgoin[a-1]++; //to make it 0 based indexing
	}
	int res = -1;
	for(int i = 0; i < n; i++){
		if(outgoin[i]==0){
			if(res==-1){
				res = i+1; //found the node
			}
			else{
				res = -1;
				break; 
				//2 such nodes so not
				//possible to go to and fro between them
				//only 1 such node can exist
			}
		}
	}
	cout << res << "\n";

}
//haze_12
