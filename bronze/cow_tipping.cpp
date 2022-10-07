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

string arr[11]; //10+1 size to prevent overflow
 
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> arr[i]; 
    }
    //in out algo we go from bottom right to top left
    //in the way if we find a 1, we take that as 
    //bottom right index of a rectangle and flip
    //all the chars in that rectangle
    //so we basically count the no of such rectangles
    //we made and flipped

    int res = 0;
    for(int i = n-1; i >=0; i--){
    	for(int j = n-1; j >=0; j--){
    		if(arr[i][j] == '1'){  
    			res++;
                //flipping rectangle with bottom right corner(i,j)
    			for(int x = 0; x <= i; x++){
    				for(int y = 0; y <= j; y++){
    					if(arr[x][y] == '0'){
    						arr[x][y] = '1';
    					}else{
    						arr[x][y] = '0';
    					}
    				}
    			}
    		}
    	}
    }
    cout << res << "\n";

}

//haze_12
