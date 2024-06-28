class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        for (int i = 0; i < a.size() && n > 0; i++) {
            if (a[i] == 0 &&
                (i == 0 || a[i-1] != 1) && 
                (i == a.size()-1 || a[i+1] != 1)) {
                a[i] = 1;  // Place a flower
                n--;       // Decrement the count of flowers to place
            }
        }
        return n == 0;
    }
};
