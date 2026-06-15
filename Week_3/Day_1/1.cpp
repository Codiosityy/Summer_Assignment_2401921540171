class Solution {
public:
    // Floyd's cycle detection:
    // Move one pointer slowly and one pointer fast; if they meet, a cycle exists.
    // Time: O(n), Space: O(1)
    bool hasCycle(ListNode* head) {
        if (head == nullptr) {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};
