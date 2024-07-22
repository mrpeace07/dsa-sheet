// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
// int n = nums.size();

// int maxi = INT_MIN;
//         for(int i= 0; i< n; i++){
//             int current = 0;
//             for(int j= i; j< n; j++){
//                 current += nums[j];
//                maxi = max(current, maxi);

//             }
//         }
//         return maxi; // order(n2)


// int n = nums.size();

// int maxi = INT_MIN;
//         for(int i= 0; i< n; i++){
            
//             for(int j= i; j< n; j++){
//                 int current = 0;
//                 for(int k=i ; k<=j; k++){
// current += nums[k];
               
//                 }
//               maxi = max(maxi,current);

//             }
//         }
//         return maxi;
 
        
//     }  // order of (n3)


// int sum =0;
// int maxi = nums[0];

// for(int i=0; i<n; i++)
// {
     
//     sum += nums[i];
//      maxi = max(maxi,sum);
//     if(sum <= 0){
//         sum = 0;
//     }
   

    
// }
// return maxi;

//     }
// }; // kadane algorithm



class Solution 
{
public:
    int maxSubArray(vector<int>& nums)
     {
        int maxSum = INT_MIN;
        int sum = 0;
        int n = nums.size();
        
        int start = 0;  // To track the start of the maximum subarray
        int end = 0;    // To track the end of the maximum subarray
        int tempStart = 0;  // Temporary start index
        
        for (int i = 0; i < n; i++) 
        {
            if (sum == 0) {
                tempStart = i;  // Potential start of a new subarray
            }
            sum += nums[i];
            if (sum > maxSum) {
                maxSum = sum;
                start = tempStart;  // Update start index
                end = i;            // Update end index
            }
            if (sum < 0) {
                sum = 0;  // Reset sum
            }
        }
        return maxSum;
     }
    };
