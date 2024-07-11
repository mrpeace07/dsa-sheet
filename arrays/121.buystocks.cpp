// class Solution {
// public:
//     int maxProfit(vector<int>& a) {
//         // int maxp=0; 
//         // int profit = 0;
//         // for(int i=0;i<a.size();i++){
//         //     for(int j=i+1; j<a.size(); j++){
//         //         if(a[j] > a[i]){
//         //             profit = a[j] - a[i];
//         //             maxp= max(maxp,profit);

//         //          }
//         //     }
//         // }
//         // return maxp; //time limit exceed

// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int maxp = 0;
        int min_price = prices[0];
        int i = 1;

        while (i < prices.size()) {
            min_price = min(min_price, prices[i]);
            maxp = max(maxp, prices[i] - min_price);
            i++;
        }

        return maxp;
    }
};
