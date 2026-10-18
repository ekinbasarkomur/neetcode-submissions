impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {

        let mut sorted_strings: HashMap<String, Vec<String>> = HashMap::new();

        for string in strs
        {
            let mut chars : Vec<char> = string.chars().collect();
            chars.sort_unstable();
            let sorted_string: String = chars.into_iter().collect();
            sorted_strings.entry(sorted_string).or_default().push(string);

        } 

        sorted_strings.into_values().collect()
    }
}
