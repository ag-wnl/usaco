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

 
set<set<char>> S[4]; //3+1 to prevent overflow

void test(char a, char b, char c) {
   set<char> s;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   S[s.size()].insert(s);
   //what this doing is that takes the three chars
   //set stores unique elements so if they all same
   //then size = 1, so stored in index 1 of set S

   //if size = 2, means a team of two formed can win,
   //so at index 2 of set S stores this
}

int main() {
   char a, b, c, d, e, f, g, h, i;
   cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
   // a b c
   // d e f
   // g h i
   test(a,b,c);
   test(d,e,f);
   test(g,h,i);
   test(a,d,g);
   test(b,e,h);
   test(c,f,i);
   test(a,e,i);
   test(g,e,c);
   cout << S[1].size() << endl << S[2].size() << endl;
   //check size of the indexes 1 and 2 to check
   //how many winners are there
}

//haze_12
