int NthRoot(int n, int m) {
    int low = 1, high = m;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long int mid_pow = 1;
        
        // Calculate mid^n
        for (int i = 0; i < n; i++) {
            mid_pow *= mid;
            // If mid_pow exceeds m, we can break early
            if (mid_pow > m) break;
        }
        
        if (mid_pow == m) {
            return mid; // Found the exact root
        } else if (mid_pow < m) {
            low = mid + 1; // Look in the higher half
        } else {
            high = mid - 1; // Look in the lower half
        }
    }
    
    return -1; // No integer nth root found
}


// #include <cmath> // For the pow function using pow o1) o(1)
// #include <iostream> // For debugging

// int NthRoot(int n, int m) {
//     // Calculate the nth root of m
//     int root = round(pow(m, 1.0 / n));

//     // Check if the calculated root to the power of n equals m
//     if (pow(root, n) == m) {
//         return root;
//     } else {
//         return -1; // Return -1 if no integer nth root exists
//     }
// }

// int main() {
//     int n = 3, m = 27;
//     int result = NthRoot(n, m);
//     std::cout << "The " << n << "th root of " << m << " is: " << result << std::endl;
//     return 0;
// }
