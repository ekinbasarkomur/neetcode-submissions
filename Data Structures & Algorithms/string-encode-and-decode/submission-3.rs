impl Solution {
    pub fn encode(strs: Vec<String>) -> String {
        let mut encoded_string: String = String::new();

        for string in &strs {
            encoded_string = format!("{}{}#{}", encoded_string, string.len(), string);
        }

        encoded_string
    }

    pub fn decode(s: String) -> Vec<String> {
        let mut decoded_vector: Vec<String> = Vec::new();

        let mut rest: String = s;

        while let Some((len, tail)) = rest.split_once("#") {
            let len: usize = len.parse().unwrap();
            decoded_vector.push(tail[..len].to_string());

            rest = tail[len..].to_string();
        }

        decoded_vector
    }

}
