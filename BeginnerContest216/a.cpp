/**
 * AtCoder Beginner Contest 216
 * A - Signed Difficulty 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  double x;
  
  cin >> x;

  int i_x = (int)x;
  
  cout << i_x;

  int y = ((double)x-(double)i_x)*10;
  
  if(0 <= y && y <= 2) {
    cout << "-";
  }
  else if(7 <= y && y <= 9) {
    cout << "+";
  }

  cout << endl;
  
  return 0;
}
