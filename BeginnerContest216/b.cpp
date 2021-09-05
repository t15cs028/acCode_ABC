/**
 * AtCoder Beginner Contest 216
 * B - Same Name 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

int main(){

  int N;
  cin >> N;

  vector<string> names;
  string ans = "No";

  rep(i, N){
    string first, second, name;
    cin >> first >> second;
    name = first + " " + second;
    if(ans == "No"){
      if(find(names.begin(), names.end(), name) != names.end()){
	ans = "Yes";
      }
    }
    names.push_back(name);
  }

  cout << ans << endl;
  
  return 0;
}
