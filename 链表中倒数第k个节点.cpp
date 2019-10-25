//题解中的双指针思路更加节省空间
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        queue<ListNode*> ans;
        int count = 0;
        while(pListHead != nullptr) {
            ans.push(pListHead);
            ++count;
            if (count > k) {
                ans.pop();
            }
            pListHead = pListHead->next;
        }
        if (count < k) {
            return nullptr;
        } else {
            return ans.front();
        }
    }
};