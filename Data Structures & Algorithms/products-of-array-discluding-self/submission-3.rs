impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let mut prefix: Vec<i32> = vec![1];
        let mut suffix: Vec<i32> = vec![1];
        let mut output: Vec<i32> = Vec::new();
        let len = nums.len();

        for (i, &num) in nums.iter().enumerate() {
            prefix.push(prefix[i] * num);
            suffix.push(suffix[i] * nums[len - i - 1]);
        }

        for i in 0..len {
            //println!("{} - {}", prefix[i], suffix[i]);
            output.push(prefix[i] * suffix[len - i - 1]);
        }

        output
    }
}
