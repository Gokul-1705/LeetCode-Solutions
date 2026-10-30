class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        // ERROR: Nested Class Definition. You have declared 'class Solution' inside the 'alternatingSum' method.
        // This will cause a compilation error. You need to remove the redundant inner class and method definitions.
        // The logic inside the inner method is actually correct for calculating the alternating sum.
        //
        // Current Code Complexity:
        // Time Complexity: O(N) where N is the size of nums.
        // Space Complexity: O(1).
        //
        // Fix: Remove the duplicate class/method wrapper so that only one 'Solution' class and one 'alternatingSum' method exist.
        // Fixed: Removed the nested 'Solution' class and its duplicate method. Now only a single 'alternatingSum' method exists within the outer 'Solution' class, preserving the original O(N) time and O(1) space complexity.

        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) {
                sum += nums[i];
            } else {
                sum -= nums[i];
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna