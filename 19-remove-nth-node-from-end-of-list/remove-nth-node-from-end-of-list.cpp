class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return NULL;

        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        int targetIndex = cnt - n + 1;

        if (targetIndex == 1) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }


        ListNode* curr = head;
        for (int i = 1; i < targetIndex - 1; ++i) {
            curr = curr->next;
        }

        ListNode* nodeToDelete = curr->next;
        curr->next = nodeToDelete->next;
        delete nodeToDelete;

        return head;
    }
};