
// //Brute

// class Solution {
// public:
   
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* newHead=nullptr;
//         ListNode* temp=nullptr;
        
//         while(head!=NULL){
            
//             if(head->next==nullptr){
//                if(newHead==nullptr){
//                 newHead=new ListNode(head->val);
//                 temp=newHead;

               
//                }else{
//                  temp->next= new ListNode(head->val);
//                  temp=temp->next;
//                 }
//                 break;
//                 }
          
//             if(head->val==(head->next)->val){
//                 head=head->next;
//                 continue;
//             }
//             else{
//                if(newHead==nullptr){
//                 newHead=new ListNode(head->val);
//                 temp=newHead;

               
//                }else{
//                  temp->next= new ListNode(head->val);
//                  temp=temp->next;
//                }

//             }
//             head=head->next;

//         }
//         return newHead;
//     }
// };


// //Optimal


#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	// Remove duplicates from sorted list (retain one of each value)
ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newHead=nullptr;
        ListNode* temp= nullptr;
        int count=0;
        
        while(head != NULL){
       
       while( head->next != nullptr && (head->val)==(head->next)->val){
        cout<<"skip:"<<head->val<<endl;
                head=head->next;
                continue;
            }
            if(newHead==nullptr){
                newHead=new ListNode(head->val);
                temp=newHead;
                head=head->next;
                continue;
            }
            cout<<"insert:"<<head->val<<endl;
            temp->next=new ListNode(head->val);
            temp=temp->next;
            head=head->next;
        }
        
        return newHead;
    }
};

// helper: push value to tail, returns new head
ListNode* push_back(ListNode* head, int val) {
	ListNode* node = new ListNode(val);
	if (!head) return node;
	ListNode* t = head;
	while (t->next) t = t->next;
	t->next = node;
	return head;
}

// helper: print list
void printList(ListNode* head) {
	ListNode* t = head;
	while (t) {
		cout << t->val;
		if (t->next) cout << "->";
		t = t->next;
	}
	cout << '\n';
}

int main() {
	// example usage
	vector<int> vals = {1,1,2,2,3};
	ListNode* head = nullptr;
	for (int v : vals) head = push_back(head, v);
	cout << "Input: "; printList(head);
	Solution sol;
	head = sol.deleteDuplicates(head);
	cout << "Output: ";printList(head);
	return 0;
}