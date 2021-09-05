/**
 * AtCoder Biggier Contest 215
 * A - Your First Judge
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

  string str = "";
  string judgeString = "Hello,World!";

  cin >> str;

  string ans = "WA";
  if(str == judgeString){
    ans = "AC";
  }

  cout << ans << endl;
  
  
  return 0;
}
