#include <iostream>

using namespace std;
long long gcd(long long a, long long b) {
  //write your code here
  if(a>=b && a%b==0)
    return b;
  else
    return gcd(b,a%b);
}
int main() {
  long long a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  return 0;
}
