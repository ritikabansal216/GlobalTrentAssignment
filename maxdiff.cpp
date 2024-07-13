#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max

int findMaxDifference(const std::vector<int>& nums) {
    if (nums.empty()) {
        return 0; // Return 0 if the array is empty
    }

    int minElement = nums[0];
    int maxElement = nums[0];

    for (int num : nums) {
        if (num < minElement) {
            minElement = num;
        }
        if (num > maxElement) {
            maxElement = num;
        }
    }

    return maxElement - minElement;
}

int main() {
    std::vector<int> nums = {3, 10, 5, 6, 20, 1, 15}; // Example input
    std::cout << "Maximum difference between any two elements: " << findMaxDifference(nums) << std::endl;
    return 0;
}
