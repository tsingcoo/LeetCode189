#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for (auto &n:nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}