class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_String;
        for (const auto& i : strs) {
            encoded_String += to_string(i.size()) + "#" + i;
        } 
        return encoded_String; 
    }
    // Gets the encoded version of strs
    vector<string> decode(string s) {
        vector<string> output; 
        int i; 

        while (i < s.size()) {
            int j = i; 
            while (s[j] != '#') {
                j += 1;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length; 
            output.push_back(s.substr(i, length));
            i = j;
        }

        return output; 
        

        }
    
    // outputs the decoded version of strs
};
