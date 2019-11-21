/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL) return(NULL);
    
    if(head->next){
        struct ListNode* ptrA0 = head;
        struct ListNode* ptrA1 = head->next;
        struct ListNode* ptrA2 = head->next->next;   
       
        head            =ptrA1; 
        head->next      =ptrA0;   
        head->next->next=swapPairs(ptrA2);
    }
    return(head);
}
