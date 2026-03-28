function twoSum(nums, target) {
    const ump = new Map();

    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];
        if (ump.has(complement)) {
            return [ump.get(complement), i].sort((a, b) => a - b);
        }
        ump.set(nums[i], i);
    }

    return [];
}