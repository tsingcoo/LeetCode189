//
// Created by 王青龙 on 2017/3/7.
//

#include "solution.h"

void Solution::rotate(std::vector<int> &nums, int k) {
    k %= nums.size();
    if (nums.size() == 0 || k == 0) {
        return;
    }
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}
