#include <algorithm>
#include <iostream>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {

    std::string word_1 = s;
    std::string word_2 = t;

    bool is_anagram;
    if (word_1.size() != word_2.size()) {
      is_anagram = false;
    }

    std::sort(word_1.begin(), word_1.end());
    std::sort(word_2.begin(), word_2.end());

    if (word_1 == word_2) {
      is_anagram = true;
    } else {
      is_anagram = false;
    }

    return is_anagram;
  }
};

int main() {
  Solution solution;

  std::string word_1 = "anagramasdfghjkl";
  std::string word_2 = "nagaramlkjhgfdsp";

  bool is_anagram = solution.isAnagram(word_1, word_2);

  std::cout << is_anagram << "\n";
}
