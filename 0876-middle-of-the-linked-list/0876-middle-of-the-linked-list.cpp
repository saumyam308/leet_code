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
    
    ListNode* middleNode(ListNode* head) {
    
        ListNode* slow = head;
        ListNode* fast = head;
        
        //jab fast null pe pahuch gya tha toh loop chalna band ho gya tha
        while(fast != NULL){
         // fast ko 2 step age badhana hai
            fast = fast -> next;
                if(fast != NULL){
                 fast = fast->next;
                // yaha fast me do step chal liye hain
                // ab slow bhi chal sakta hai
                    slow = slow->next;
                }
        }
        
        return slow;
    }
};