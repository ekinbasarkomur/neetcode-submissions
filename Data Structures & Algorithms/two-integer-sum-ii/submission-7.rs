
impl Solution {
    pub fn two_sum(numbers: Vec<i32>, target: i32) -> Vec<i32> {
        let mut left: i32 = 0;
        let mut right: i32 = numbers.len() as i32 - 1;

        while left < right {
            match target.cmp(&(numbers[left as usize] + numbers[right as usize] as i32)) {
                Ordering::Greater => left += 1,
                Ordering::Equal => return vec![left as i32 + 1, right as i32 + 1],
                Ordering::Less => right -= 1,
            }
        }
        vec![0, 0]
    }

}
