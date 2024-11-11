class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result; 
        for (const auto& i : strs) {
            vector<int> count(26, 0);
            for (char j: i) { // "i" is the container because of the range-based for loop is the index of the strs vector 
                count[j - 'a']++; // adding +1 b/c you count letters starting from 1 not 0 
            }
            string key = to_string(count[0]); // there is only count[0];
            // count[0] holds the single word 
            for (int k = 1; k < 26; ++k) {
                key += ',' + to_string(count[k]); w
                // count[k] is iterating through the characters of the word
            }
            result[key].push_back(i); // this pushes the newly created key into the hashmap 
            
        } 
        
        vector<vector<string>> groupResult; 
        for (const auto& pair: result) {
            //How to add the pairs of anagrams to new vector? 
            groupResult.push_back(pair.second); 
        }
        
        return groupResult; 
    }
};