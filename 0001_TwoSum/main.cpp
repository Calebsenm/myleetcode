#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i; j < nums.size(); j++) {

        if (i == j) {
          continue;
        }

        if (nums[i] + nums[j] == target) {
          result.push_back(i);
          result.push_back(j);
        }
      }
    }
    return result;
  }
};

int main() {
  Solution solution;

  std::vector<int> numbers = {1, 3, 5, 7, 2, 6, 4, 10};
  int target = 13;

  std::vector<int> num_list = solution.twoSum(numbers, target);
  for (const auto &num : num_list) {
    std::cout << num << "\n";
  }

  return 0;
}
