/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode fakeHead(0);
        ListNode* curNode = &fakeHead;
        while(nullptr != pHead1 || nullptr != pHead2) {
            if (nullptr == pHead1) {
                curNode->next = pHead2;
                pHead2 = pHead2->next;
            } else if (nullptr == pHead2) {
                curNode->next = pHead1;
                pHead1 = pHead1->next;
            } else {
                if (pHead1->val < pHead2->val) {
                    curNode->next = pHead1;
                    pHead1 = pHead1->next;
                } else {
                    curNode->next = pHead2;
                    pHead2 = pHead2->next;
                }
            }
            curNode = curNode->next;
        }
        return fakeHead.next;
    }
};