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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int temp = 0;
		ListNode * result = new ListNode(0);
		ListNode * p = result;
		while(l1 != NULL || l2 != NULL) {	
			if(p->next == NULL) {
				p->next = new ListNode(0);				
			}
			p = p->next;
			int a = 0;
			int b = 0;
			if(l1 != NULL) {
				a = l1->val;
				l1 = l1->next;
			}
			if(l2 != NULL) {
				b = l2->val;
				l2 = l2->next;
			}
			
			int t = a + b+temp;
			if(t > 9) {
				temp = 1;				
				t -= 10;
				p->next = new ListNode(1);
			}else{
				temp = 0;
			}
			p->val = t;	
			
		}		
		return result->next;
    }
};