class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> ump = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (ump.containsKey(complement)) {
                int[] ans = {ump.get(complement), i};
                Arrays.sort(ans);
                return ans;
            }
            ump.put(nums[i], i);
        }

        return new int[]{};
    }
}