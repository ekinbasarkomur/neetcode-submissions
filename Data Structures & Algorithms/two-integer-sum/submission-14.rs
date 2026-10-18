impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {

    let mut seen: HashMap<i32, i32> = HashMap::new();

    for (i, num) in nums.iter().enumerate()
    {   
        let diff: i32 = target - num;
        if seen.contains_key(&num)
        {
            return vec!(seen[num] as i32, i as i32);
        }
        seen.insert(diff as i32, i as i32);

    }

    return vec!();

    }
}
