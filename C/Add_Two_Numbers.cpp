

//You are given two linked lists representing two non-negative numbers. 
//The digits are stored in reverse order and each of their nodes contain a single digit.
//Add the two numbers and return it as a linked list.

//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8

//Time:  O(m + n)
//Space: O(m + n)

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
                return addNodes(l1, l2, 0);
    }
    
    ListNode *addNodes(ListNode *l1, ListNode *l2, int carry)
    {
        if(!l1 && !l2 && carry==0) return NULL;
        int a=0, b=0; 
        if(l1){ a=l1->val; }
        if(l2){ b=l2->val; }
        int value=a+b+carry; 
        ListNode *head=new ListNode(value%10);
        head->next=addNodes(l1? l1->next: NULL , l2?l2->next:NULL, value/10);
        return head;
        
    }
};



