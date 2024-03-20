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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode * temp = list1;
        ListNode *prev = NULL;

        while(a--)
        {
            prev = temp;
            temp = temp->next;
        }

        ListNode *temp2 =  list1;
        ListNode *prev2 = NULL;

        while(b--)
        {
            prev2 = temp2;
            temp2 = temp2->next;
        }

        ListNode *demo = list2;

        while(demo->next != NULL)
        {
            demo=demo->next;
        }

        demo->next = temp2->next;
        prev2->next = NULL;

        prev->next = list2;

        return list1;
    }
};
