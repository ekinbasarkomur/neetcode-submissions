impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> 
    {
        let mut inventory: HashMap<i32, i32> = HashMap::new();

        for num in nums {
            inventory.entry(num).and_modify(|e| *e += 1).or_insert(1);
        }

        let mut pairs: Vec<(i32, i32)> = inventory.into_iter().collect();

        pairs.sort_by(|a, b| b.1.cmp(&a.1));

        pairs
            .into_iter()
            .take(k as usize)
            .map(|pair| pair.0)
            .collect()

    }
}
