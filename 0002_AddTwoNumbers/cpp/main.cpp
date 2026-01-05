#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

    ListNode *list = nullptr;
    ListNode *head = nullptr;
    int i = 0;

    while (l1 != 0 or l2 != 0 or i != 0) {

      int num1 = (l1 != nullptr) ? l1->val : 0;
      int num2 = (l2 != nullptr) ? l2->val : 0;

      int num = num1 + num2 + i;

      if (num >= 10) {
        num = num - 10;
        i = 1;
      } else {
        i = 0;
      }

      if (list == nullptr) {

        list = new ListNode(num);
        head = list;
      } else {
        list->next = new ListNode(num);
        list = list->next;
      }

      if (l1)
        l1 = l1->next;
      if (l2)
        l2 = l2->next;
    }
    return head;
  }
};

int main() {

  ListNode *l1 = new ListNode(9);
  l1->next = new ListNode(9);
  l1->next->next = new ListNode(9);
  l1->next->next->next = new ListNode(9);
  l1->next->next->next->next = new ListNode(9);
  l1->next->next->next->next->next = new ListNode(9);
  l1->next->next->next->next->next->next = new ListNode(9);

  ListNode *l2 = new ListNode(9);
  l2->next = new ListNode(9);
  l2->next->next = new ListNode(9);
  l2->next->next->next = new ListNode(9);

  Solution solution;
  ListNode *list = solution.addTwoNumbers(l1, l2);

  while (list != nullptr) {
    std::cout << list->val;
    list = list->next;
  }
}
