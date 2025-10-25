#include <iostream>
bool isPithNum(int a, int b, int c){
  return true;
}
int main(){
  int a = 0, b = 0, c = 0;
  std::cin >> c >> b;
  int cnt = 0;
  while(std::cin.good()){
    cnt += isPithNum(a, b, c) ? 1 : 0;
    std::cin >> a;
  }
  if(!std::cin.eof()){
    return 1;
  }
  std::cout << cnt << "\n";
}
