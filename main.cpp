#include <iostream>
bool isPithNum(int a, int b, int c){
  a *= a;
  b *= b;
  c *= c;
  int res = a - b - c;
  res *= b - a - c;
  res *= c - a - b;
  return !res;
}
int main(){
  int a = 0, b = 0, c = 0;
  std::cin >> c >> b;
  int cnt = 0;
  while(std::cin.good()){
    std::cin >> a;
    cnt += isPithNum(a, b, c) ? 1 : 0;
    c = b;
    b = a;
  }
  if(!std::cin.eof()){
    return 1;
  }
  std::cout << cnt << "\n";
}
