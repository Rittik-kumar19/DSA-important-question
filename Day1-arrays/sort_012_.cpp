class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch flag algorithm
        int l=0;
        int m=0;
        int h=nums.size()-1;
        while(m<=h){
            switch(nums[m]){
                case 0:
                    swap(nums[l],nums[m]);
                    l++;
                    m++;
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(nums[h],nums[m]);
                    h--;
                    break;
            }
        }
        
    }
};
/*
1.sorting approach
2.counting sort
3.map datastructure
*/