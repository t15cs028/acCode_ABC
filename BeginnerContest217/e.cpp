/**
 * AtCoder Beginner Contest 217
 * E - Sorting Queries 
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;
using uInt = unsigned int;

int main(){

  int q;
  cin >> q;
  vector<uInt> a;

  rep(i,q) {
    int c;
    cin >> c;
    switch(c) {
    case 1:
      uInt x;
      cin >> x;
      a.push_back(x);
      break;
    case 2:
      cout << a.at(0) << endl;
      a.erase(a.begin());
      break;
    case 3:
      sort(a.begin(), a.end());
      break;
    }
  }
  
  
  cout << endl;
  
  return 0;
}
