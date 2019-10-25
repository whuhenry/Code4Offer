/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> ans;
        while(nullptr != head) {
            ans.push_back(head->val);
            head = head->next;
        }
        int len = ans.size();
        for (int i = 0; i < len / 2; ++i) {
            swap(ans[i], ans[len - i - 1]);
        }
        return ans;
    }
};