
// time complexity: O(n)
// space complexity: O(1)

   class Solution {
      public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter=0,score=0;
        for(int i=0; i<events.size(); i++){
            if(events[i]=="W"){
                counter++;
                if(counter==10) break;
            }else if(events[i]=="WD" || events[i]=="NB"){
                score++;
            }else{
                score+=stoi(events[i]);
            }
        }
        return {score,counter};
    }
};