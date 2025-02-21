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
    bool isPalindrome(ListNode* head) {
        vector<int>num1;
        vector<int>num2;
        ListNode* current = head;
        ListNode* current1 = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int flag=0;
        int count=0;
        while(current!=NULL){
            num1.push_back(current->val);
            current=current->next;
            count++;
        }
        int i=0;
        int j=count-1;
        while(i<j){
           
            if(num1[i]==num1[j]){
                flag=0;
                i++;
                j--;
            }
            else{
                flag=1;
                break;
            } 
        }
       if(flag==0){
           return true;
       }
       
     return false;

    }
};