/**
 * AtCoder Beginner Contest 217
 * D - Cutting Woods 
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int main(){

  int l, q;
  vector<int> p;
  cin >> l >> q;
  
  p.push_back(0);
  p.push_back(l);

  int min, max, pivot;
  rep(i,q) {
    int c, x;
    cin >> c >> x;
    min = 0;
    max = p.size()-1;
    while(max-min > 1) {
      pivot = min + (max-min)/2;
      if(x < p.at(pivot)) max = pivot;
      else min = pivot;
    }
    switch(c) {
    case 1:
      if(x < p.at(min)) pivot = min;
      else pivot = max;
      p.insert(p.begin()+pivot, x);
      break;
    case 2:
      int ans = 0;
      if(x < p.at(min)) ans = p.at(min);
      else ans = p.at(max) - p.at(min);
      cout << ans << endl;
      break;
    }
  }
  
  return 0;
}
