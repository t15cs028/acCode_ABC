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
using uInt = unsigned int;

int main(){

  uInt l;
  int q;
  vector<uInt> p;
  cin >> l >> q;
  p.push_back(l);
  
  rep(i,q) {
    int c;
    uInt x;
    cin >> c >> x;
    switch(c) {
    case 1:
      p.push_back(x);
      break;
    case 2:
      sort(p.begin(), p.end());
      uInt min = 0;
      uInt max = p.at((int)p.size()-1);
      rep(i,(int)p.size()) {
	if(x > p.at(i)) {
	  min = p.at(i);
	}
	else {
	  max = p.at(i);
	  break;
	}
      }
      cout << max-min << endl;
      break;
    }
  }
  
  
  cout << endl;
  
  return 0;
}
