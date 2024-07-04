class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += n[i];
        }
        int maximum = sum;
        for (int i = k; i < n.size(); ++i) {
            sum += n[i] - n[i - k];
            maximum = max(maximum, sum);
        }
        return static_cast<double>(maximum) / k;
    }
};
