/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    const numsSet = new Set(nums);
    console.log(numsSet);
    const isEqual = numsSet.size === nums.length;

    return !isEqual;
};

export default containsDuplicate;