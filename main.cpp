#include <iostream>
int main(){
  int a = 0;
  std::cin >> a;
  while(std::cin.good()){
    std::cin >> a;
  }
  std::cout << "nice" << "\n";
}
