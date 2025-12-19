#include <iostream>
#include <map>

class Solution {
public:
  int romanToInt(std::string s) {

    std::map<char, int> numbers;
    numbers['I'] = 1;
    numbers['V'] = 5;
    numbers['X'] = 10;
    numbers['L'] = 50;
    numbers['C'] = 100;
    numbers['D'] = 500;
    numbers['M'] = 1000;

    int number = 0;
    int size_of = s.size();

    for (int i = 0; i < size_of; i++) {
      char num = s[i];

      if (i + 1 < size_of && numbers[num] < numbers[s[i+1]]) {
        number -= numbers[num];
      } else {
        number += numbers[num];
      }
    }

    return number;
  }
};

int main() {
  Solution solution;

  int nummber = solution.romanToInt("LVIII");
  std::cout << nummber << "\n";
}
