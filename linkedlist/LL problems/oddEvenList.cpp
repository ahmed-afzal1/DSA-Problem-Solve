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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddH = NULL;
        ListNode* oddT = NULL;
        ListNode* evenH = NULL;
        ListNode* evenT = NULL;
        int count = 1;

        while(head != NULL)
        {
            if(count%2 == 0)
            {
                if(evenH == NULL)
                {
                    evenH = head;
                    evenT = head;
                    head = head->next;
                }else{
                    evenT->next = head;
                    evenT = evenT->next;
                    head = head->next;
                }
            }else{
                if(oddH == NULL)
                {
                    oddH = head;
                    oddT = head;
                    head = head->next;
                }else{
                    oddT->next = head;
                    oddT = oddT->next;
                    head = head->next;
                }
            }
            count ++;
        }

        if(oddH == NULL)
        {
            return evenH;
        }

        if(evenH == NULL)
        {
            return oddH;
        }

        evenT->next = NULL;
        oddT->next = evenH;

        return oddH;
    }
};