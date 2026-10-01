class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int target = 0;

        for (int num : nums) {
            if (count == 0) target = num;

            if (target == num) count++;
            else count--;
        }

        return target;
    }
}