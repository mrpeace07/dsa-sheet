class Solution {
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here

        int n = r - l + 1;  // Calculate the number of elements between l and r
        vector<int> a;
        
        for(int i = l; i <= r; i++) {
            a.push_back(arr[i]);
        }
        
        sort(a.begin(), a.end());
        
        return a[k - 1];  // k-th smallest is at index k-1 (0-based indexing)
    }
};
