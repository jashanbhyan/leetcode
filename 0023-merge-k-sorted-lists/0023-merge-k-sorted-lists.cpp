class Solution {
public:

    ListNode* mergeTwo(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        ListNode* head;

        if(l1->val <= l2->val) {
            head = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            l2 = l2->next;
        }

        ListNode* curr = head;

        while(l1 != NULL && l2 != NULL) {
            if(l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            }
            else {
                curr->next = l2;
                l2 = l2->next;
            }

            curr = curr->next;
        }

        if(l1 != NULL) curr->next = l1;
        if(l2 != NULL) curr->next = l2;

        return head;
    }

    ListNode* mergeSort(vector<ListNode*>& lists, int low, int high) {
        if(low > high) return NULL;

        if(low == high) return lists[low];

        int mid = low + (high - low) / 2;

        ListNode* left = mergeSort(lists, low, mid);
        ListNode* right = mergeSort(lists, mid + 1, high);

        return mergeTwo(left, right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;

        return mergeSort(lists, 0, lists.size() - 1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna