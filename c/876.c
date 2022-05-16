/*
    利用two pointers，一個fast一個slow，fast以2的倍數前進，當fast->next == NULL 或 fast = NULL，slow即是中間的元素。
*/
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* slow;
    struct ListNode* fast;
    slow = fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}