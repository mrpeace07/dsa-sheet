class Solution {
public:
    void rearrange(int arr[], int n) {
        // Separate positive and negative numbers
        vector<int> pos, neg;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }

        int i = 0, j = 0, k = 0;

        // Alternate positive and negative numbers
        while (i < pos.size() && j < neg.size()) {
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }

        // If there are remaining positive numbers
        while (i < pos.size()) {
            arr[k++] = pos[i++];
        }

        // If there are remaining negative numbers
        while (j < neg.size()) {
            arr[k++] = neg[j++];
        }
    }
};
