  // time complexity is O(max(m,n)) where m and n are the lengths of the two linked lists
   // space complexity is O(max(m,n)) for

      class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp3= dummy;
        int sum=0,count=0;
        while(temp1!=nullptr && temp2!=nullptr){
            sum=temp1->val+temp2->val+count;
             if(sum>=10){
                count = 1;
             }else{
                count = 0;
             }
             sum=sum%10;
             ListNode* newnode = new ListNode(sum);
             temp3->next=newnode;
             temp3 = temp3->next;
             temp1=temp1->next;
             temp2=temp2->next;
        }
              while(temp1!=nullptr){
               sum=temp1->val+count;
                  if(sum>=10){
                count = 1;
             }else{
                count = 0;
             }
              sum=sum%10;
                 ListNode* newnode = new ListNode(sum);
                 temp3->next=newnode;
                 temp3=temp3->next;
                 temp1=temp1->next;
              }

             while(temp2!=nullptr){
               sum=temp2->val+count;
                  if(sum>=10){
                count = 1;
             }else{
                count = 0;
             }
              sum=sum%10;
                 ListNode* newnode = new ListNode(sum);
                 temp3->next=newnode;
                 temp3=temp3->next;
                 temp2=temp2->next;
              }
           if(count==1){
             ListNode* newnode = new ListNode(count);
             temp3->next=newnode;

             temp3=temp3->next;
           }
           return dummy->next;
    }
};


  // time complexity is O(max(m,n)) 
  // space complexity is O(max(m,n)) 



      
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* temp3 = dummy;

        int sum = 0;
        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr || carry) {

            sum = carry;

            if (temp1 != nullptr) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != nullptr) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            carry = sum / 10;

            ListNode* newnode = new ListNode(sum % 10);

            temp3->next = newnode;
            temp3 = temp3->next;
        }

        return dummy->next;
    }
};