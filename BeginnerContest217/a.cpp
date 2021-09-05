/**
 * AtCoder Beginner Contest 217
 * A - Lexicographic Order  
 */

#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

int main(){

  string s, t;
  
  cin >> s >> t;

  string ans = "";

  if(s < t){
    ans = "Yes";
  }
  else {
    ans = "No";
  }

  cout << ans << endl;
  
  return 0;
}
