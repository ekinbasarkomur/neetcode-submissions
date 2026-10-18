/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode dummy;
        ListNode *merged_list = &dummy;

        while (curr1 != nullptr || curr2 != nullptr) {
            if (curr1 == nullptr) {
                merged_list->next = curr2;
                merged_list = curr2;
                curr2 = curr2->next;

            } else if (curr2 == nullptr) {
                merged_list->next = curr1;
                merged_list = curr1;
                curr1 = curr1->next;

            } else if (curr1->val < curr2->val) {
                merged_list->next = curr1;
                merged_list = curr1;
                curr1 = curr1->next;
            } else {
                merged_list->next = curr2;
                merged_list = curr2;
                curr2 = curr2->next;
            }
        }

        return dummy.next;
    }
};
