var majorityElement = function (nums) {
    let count = 0;
    let target = 0;

    for (const num of nums) {
        if (count === 0) target = num;

        if (target === num) count++;
        else count--;
    }

    return target;
};