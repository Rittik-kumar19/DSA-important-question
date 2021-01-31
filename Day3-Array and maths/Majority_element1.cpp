class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidates=0;
        for(int num:nums){
            if(count==0){
                candidates=num;
            }
            if(num==candidates){
                count+=1;
            }
            else{
                count-=1;//focus on if else;
            }
        }
        return candidates;
    }
};