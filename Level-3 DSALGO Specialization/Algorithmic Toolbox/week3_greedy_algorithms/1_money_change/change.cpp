#include <iostream>

int get_change(int m) {
  //write your code here
  int count = 0;
  int coins[] = {1, 5, 10};

  int index = 2;

  int numcoins = m/coins[index];
  int remains = m%coins[index]; 

  // std::cout << numcoins;

  index--;
  
  while (remains!=0 || index!=-1){
    numcoins = numcoins + remains/coins[index];
    // std::cout << numcoins  << "\n";

    remains = m%coins[index]; 
    index--;
  }

  return numcoins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
