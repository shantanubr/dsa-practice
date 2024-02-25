/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    let map = new Map();

    for(let i=0; i<nums.length; i++) {
        if(!map.has(nums[i])) {
            map.set(nums[i], 0);
        }
        let newCount = map.get(nums[i]);
        map.set(nums[i], newCount + 1);
    }

    const sortedMap = new Map([...map.entries()].sort((a, b) => b[1] - a[1]));
    let result = [];
    let kk = k;

    for (let [key] of sortedMap) {
        if (kk > 0) {
            result.push(key);
            kk = kk - 1;
        } else break;
    }
    return result;
};