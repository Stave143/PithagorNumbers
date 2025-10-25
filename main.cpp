#include <iostream>
#include <limits>

bool isPithNum(int a, int b, int c){
  int maxInt = std::numeric_limits<int>::max();
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
    try{
      cnt += isPithNum(a, b, c) ? 1 : 0;
    }
    catch(const std::exception &e){
      return 2;
    }
    c = b;
    b = a;
  }
  if(!std::cin.eof()){
    return 1;
  }
  std::cout << cnt << "\n";
}
