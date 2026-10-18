impl Solution {
    pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
        let mut single_nums: HashSet<i32> = HashSet::new();
        let mut max_count = 0;
        let mut inc_map: HashMap<i32, i32> = HashMap::new();

        for num in nums {
            single_nums.insert(num);
        }

        for num in &single_nums {
            if single_nums.contains(&(*num - 1)) {
                continue;
            }

            inc_map.insert(*num, 1);
        }

        for (start, count) in &mut inc_map {
            let mut inc = start + 1;
            loop {
                if single_nums.contains(&inc) {
                    *count += 1;
                    inc += 1;
                    continue;
                }
                break;
            }

            if *count > max_count {
                max_count = *count;
            }
        }

        max_count
    }

}
