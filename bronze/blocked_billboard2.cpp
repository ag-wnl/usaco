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

//http://www.usaco.org/index.php?page=viewproblem2&cpid=783


struct rect{			//struct for rectangle and area
	int x1,y1,x2,y2;
	int area(){
		return (y2 - y1)*(x2 - x1); 
	}
};

int overlapp(rect i, rect j){
	int xOver = max(0, min(i.x2, j.x2) - max(i.x1, j.x1));
	int yOver = max(0, min(i.y2, j.y2) - max(i.y1, j.y1));
	return xOver*yOver; //overlapping area 
	//taking max of 0,expression caus area cant be -ve
}
 
int main(){
    rect a,b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2; //taking in rect
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    if (a.x1 >= b.x1 && a.x2 <= b.x2 && ((a.y2 >= b.y1 && a.y2 <= b.y2) || (a.y1 >= b.y1 && a.y1 <= b.y2))) {
        cout << a.area() - overlapp(a, b) << '\n';
    } else if (a.y1 >= b.y1 && a.y2 <= b.y2 && ((a.x2 >= b.x1 && a.x2 <= b.x2) || (a.x1 >= b.x1 && a.x1 <= b.x2))) {
        cout << a.area() - overlapp(a, b) << '\n';
    } else {
        cout << a.area() << '\n';
    }
}

//haze_12
