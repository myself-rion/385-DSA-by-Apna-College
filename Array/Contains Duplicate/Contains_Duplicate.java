class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n = nums.length;
        HashSet<Integer> hs = new HashSet<>();
        for (int i = 0; i < n; ++i) {
            hs.add(nums[i]);
        }

        return !(hs.size() == n);
    }
}