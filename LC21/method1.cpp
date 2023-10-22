#include<iostream>
using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

 //main solution
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head;
        ListNode* front;
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        }

        if(list1->val <= list2->val){
                head = list1;
                front = list1;
                list1= list1->next;
        }
        else{
            head = list2;
            front = list2;
            list2=list2->next;
        }
        while(list1!=nullptr && list2!=nullptr ){
            
            if(list1->val <= list2->val){
                head->next = list1;
                list1 = list1->next;
                head = head->next;
            }
            else{
                head->next = list2;
                list2 = list2->next;
                head = head->next;
            }
        }
        if (list1 != nullptr) {
            head->next = list1;
        } else {
            head->next = list2;
        }
        return front;
        
    }
};

int main(){
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print the merged list
    while (mergedList != nullptr) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }


}