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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* preNode = nullptr;
        while(nullptr != pHead) {
            ListNode* nextNode = pHead->next;
            pHead->next = preNode;
            preNode = pHead;
            pHead = nextNode;
        }
        return preNode;
    }
};