#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {

    std::map<int, int> numbers;

    for (int num : nums) {

      numbers[num] += 1;

      if (numbers[num] > 1) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 2, 4, 6, 7, 8, 9, 0, 1};

  Solution solution;

  bool result = solution.containsDuplicate(numbers);
  std::cout << result << "\n";
}
