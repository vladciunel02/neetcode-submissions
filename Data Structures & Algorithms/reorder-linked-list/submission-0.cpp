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
    ListNode* reverseOrder(ListNode* head){
        ListNode*prev,*curr,*next;
        curr = head;
        prev = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode*slow = head,*fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        second = reverseOrder(second);
        slow->next = nullptr;
        ListNode *first = head;
        ListNode *temp1, *temp2;
        while(second != nullptr){
            temp1 = first->next;
            temp2 = second->next;
            first->next = second;
            second->next = temp1;
            second = temp2;
            first = temp1;
        }
        
    }
};
