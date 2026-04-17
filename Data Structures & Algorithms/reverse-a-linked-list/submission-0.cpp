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
    ListNode* reverseList(ListNode* head) {
    ListNode *prev=nullptr,*nexty,*current;
    nexty=head;
    current=head;
    while(nexty!=nullptr){
        nexty=nexty->next;
        current->next=prev;
        prev=current;
        current=nexty;
    }
    return prev;



    }
};
