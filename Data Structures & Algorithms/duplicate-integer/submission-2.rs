impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let len = nums.len();
        let mut numbers: Vec<i32> = vec![];

        for i in 0..len {
            if numbers.contains(&nums[i])
            {
                return true;
            }
            numbers.push(nums[i]);
        }

    return false;

    }
}
