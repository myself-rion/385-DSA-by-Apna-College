def two_sum(nums: list[int], target: int) -> list[int]:
    ump = {}

    for i, num in enumerate(nums):
        complement = target - num
        if complement in ump:
            return sorted([i, ump[complement]])
        ump[num] = i

    return []