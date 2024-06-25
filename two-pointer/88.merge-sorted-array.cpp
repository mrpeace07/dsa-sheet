// class Solution { own using extra array
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
// //         vector<int> a;

// //         for(int i=0; i< m; i++){
// //             a.push_back(nums1[i]);
// //         }
// //         for(int j=0; j< n; j++){
// //            a.push_back(nums2[j]);
// //         }

// //         sort(a.begin(),a.end());

// //         for (int i = 0; i < a.size(); i++) {
// //              nums1[i]=a[i];

// //         }
// //     }
// // };

// for (int j = 0, i = m; j<n; j++){ using stl
//             nums1[i] = nums2[j];
//             i++;
//         }
//         sort(nums1.begin(),nums1.end());
//     }
//     };

    class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
