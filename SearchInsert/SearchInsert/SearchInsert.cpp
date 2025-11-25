#include<iostream>
#include<vector>

int searchInsert(std::vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1, mid;

	while (left <= right) {

		mid = (left + right) / 2;

		if (nums[mid] == target)
			return mid;
		else if (nums[mid] > target)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return left;
}

int main() {
	std::vector<int> nums = { 1,3,5,6 };

	std::cout << searchInsert(nums, 5) << std::endl; // Output: 2
	std::cout << searchInsert(nums, 2) << std::endl; // Output: 1
	std::cout << searchInsert(nums, 7) << std::endl; // Output: 4
	return 0;
}