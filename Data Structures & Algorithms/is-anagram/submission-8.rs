impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {

        if s.len() != t.len()
        {
            return false;
        }

        let mut s_map: HashMap<char, i32> = HashMap::new();
        let mut t_map: HashMap<char, i32> = HashMap::new();

        for (s_char, t_char) in s.chars().zip(t.chars())
        {   
            *s_map.entry(s_char).or_insert(0) += 1;
            *t_map.entry(t_char).or_insert(0) += 1;
        }

        s_map == t_map
    }
}
