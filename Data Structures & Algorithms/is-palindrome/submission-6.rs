impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let mut clean: Vec<char> = Vec::new();



        for c in s.trim().chars() {
            if c.is_alphanumeric() {
                clean.push(c.to_ascii_lowercase());
            }
        }

        if clean.len() == 0
        {
            return true;
        }

        //let ic: usize = (clean.len() / 2) as usize;
        let mut left = 0;
        let mut right = clean.len() - 1;

        while right > left {
            //println!("{} - {}", left, right);
            if clean[left] != clean[right] {
                return false;
            }
            left += 1;
            right -= 1;
        }
        true
    }

}
