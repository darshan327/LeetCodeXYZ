  #include<iostream>
  #include<vector>
  #include<climits>
   using namespace std;

   struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
      val=x;
      next=nullptr;
    }
   };



class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* nxt=curr->next;
        int flag=0,first=0,last=0,mini=INT_MAX,maxi=INT_MIN,count=1;
        while(curr->next!=nullptr){
            count++;
            if(((curr->val>prev->val && curr->val>nxt->val)||(curr->val<prev->val && curr->val<nxt->val))&&flag==0){
                 first=count;
                 last=count;
                 flag=1;
            }else if((curr->val>prev->val && curr->val>nxt->val)||(curr->val<prev->val && curr->val<nxt->val)){
                 mini=min(mini,count-last);
                 maxi=max(maxi,count-first);
                 last=count;
            }
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        if(maxi==INT_MIN){
            return {-1,-1};
        }
        return {mini,maxi};
    }
};


    void printSolution(ListNode* head){
        while(head!=nullptr){
            cout<<head->val;
            if(head->next!=nullptr){
                cout<<"-->";
            }
            head=head->next;
        }
    }

  int main(){
    Solution obj;
    int n,x;
    cin>>n>>x;
     ListNode* head=new ListNode(x);
     ListNode* temp=head;
     for(int i=1; i<n; i++){
        cin>>x;
        temp->next=new ListNode(x);
        temp=temp->next;
     }
     printSolution(head);
     vector<int> ans= obj.nodesBetweenCriticalPoints(head);
     for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl;
     printSolution(head);
    return 0;
  }