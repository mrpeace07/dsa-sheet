class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=0; i<n; i++){
    //         for(int j = 0; j< n-1-i; j++){
    //             if(nums[j] > nums[j+1]){
    //                 swap(nums[j+1],nums[j]);
    //             }
    //         }
    //     }
    // } // nlogn 0(n)


// int count1 = 0;
// int count2 = 0;
// int  count3 = 0;
//     for(int i = 0; i<nums.size(); i++){
//         if(nums[i] == 0 ) count1++;
//         else if(nums[i] == 1) count2++;
//         else count3++;
//     }

//     for(int i = 0; i<count1 ; i++) nums[i] = 0;
//     for(int i = count1; i< count1+count2 ; i++) nums[i] = 1;
//     for(int i = count1+count2; i<nums.size(); i++) nums[i] = 2;
//     }//o(4n) 0(1)


int l = 0; int m = 0; int h = nums.size()-1; // dnf
while(m <= h){
if(nums[m] == 0) {
    swap(nums[l],nums[m]);
    l++;
    m++;
}else if (nums[m] == 1 ){
    m++;
}
else if (nums[m] == 2){
    swap(nums[m],nums[h]);
    h--;
}
}

    }
};
