/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        while(a->next != NULL && b->next != NULL)
        {
            if(a == b) // jab length same hogi
            { 
                return a;
            }
          
            a = a -> next;
            b = b -> next;
        }
          // agar length different hai
        if(a->next == NULL) // agar a ka next NULL ho gya hai matlb b bada hai
        {
            // b linklist is bigger ya equal h
            // we need to find out how much bigger it is
            int blen = 0;
            while(b->next != NULL)
            {
                blen++;
                b = b->next;
            }
            while(blen--)
            {
                headB = headB->next;
            }
         }
        else{
              // a linklist is bigger
            // we need to find out how much bigger it is
            int alen = 0;
            while(a->next != NULL)
            {
                alen++;
                a = a->next;
            }
            while(alen--)
            {
                headA = headA->next;
            }
        }
        while(headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }
};