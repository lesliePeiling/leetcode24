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
        struct ListNode* ptrA0 = malloc(sizeof(struct ListNode));
        struct ListNode* ptrA1 = malloc(sizeof(struct ListNode));
        struct ListNode* ptrA2 = malloc(sizeof(struct ListNode));


        ptrA0=head;
        ptrA1=head->next;
        ptrA2=head->next->next;

     
       
        head            =ptrA1; 
        head->next      =ptrA0;   
        head->next->next=swapPairs(ptrA2);
    }
    return(head);
}
