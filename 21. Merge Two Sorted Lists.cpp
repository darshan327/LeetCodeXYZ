  
  // time complexity: O(n + m) where n and m are the lengths of the two lists
  // space complexity: O(1) since we are not using any extra space

  class Solution {
     public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          ListNode* res = new ListNode(0);
          ListNode* temp = list1;
          ListNode* temp2 = list2;
           ListNode* temp3 = res;
          
        while((temp!= nullptr) && (temp2!= nullptr)){
            if(temp->val < temp2->val){
                 ListNode* newnode = new ListNode(temp->val);
                 temp3->next = newnode;
                 temp3 = temp3->next;
                 temp = temp->next;
            }
            else{
                ListNode* newnode = new ListNode(temp2->val);
                 temp3->next = newnode;
                   temp3 = temp3->next;
                 temp2 = temp2->next;
            }
        }
        while(temp!= nullptr){
            ListNode* newnode = new ListNode(temp->val);
                 temp3->next = newnode;
                   temp3 = temp3->next;
                 temp = temp->next;
        }
          while(temp2!= nullptr){
             ListNode* newnode = new ListNode(temp2->val);
                 temp3->next = newnode;
                   temp3 = temp3->next;
                 temp2 = temp2->next;
            }

            return res->next;
       
    }
};