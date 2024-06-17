class Solution {
public:
     void rotate(vector<int>& nums, int k) {
        
         int n = nums.size();
         k=k%nums.size();
         reverse(nums.begin(),nums.begin()+(n-k));

         reverse(nums.begin()+(n-k),nums.end());
    
         reverse(nums.begin(),nums.end());   
        
     }
 };

// class Solution {
// public:

// void reverse(vector<int>& a, int i, int j){
//     while(i<j){
//     swap(a[i],a[j]);
//     i++;
//     j--;
// }}
//     void rotate(vector<int>& a, int k) {
//         int n,i,j;

//         n = a.size();
//         k = k%n;

//         reverse(a,0,n-k-1);
//         reverse(a,n-k,n-1);
//         reverse(a,0,n-1);
//     }
// };

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//       int i,j;

//       i=0,j=n-k-1;
//       while(i<j)
//       {
//         swap(a[i],a[j]);
//         i++;
//         j--;
//       }  
//     
