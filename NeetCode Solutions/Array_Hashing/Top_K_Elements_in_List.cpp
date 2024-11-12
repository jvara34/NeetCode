class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> occur;
        vector<vector<int>> freq(nums.size() + 1);  

        for (const auto& i : nums) {
            occur[i] = 1 + occur[i]; // adding +1 because count[n] is initially 0  
        }
        /* This loop if focused on iterating through occur to populate the freq "vector" 
        ** the first value is the amount of occurences 
        ** second value is the actual value like some number 
        */
        for (const auto& j: occur) { 
            freq[j.second].push_back(j.first);
        }

        vector<int> output; 
        for (int i = freq.size() - 1; i > 0; i--) { // This loop is going backwards from the freq vector 
            // Needs a nested loop because freq data type is vector<int> 
            // You first access the that element THEN the elements inside that "vector"
            for (int n: freq[i]) { /*this loop is iterating the list of numbers in that value*/
                output.push_back(n); // n is equal to freq[n] 
            }
            if (output.size() == k) { // once the size equals k return whatever numbers 
                return output; 
            }
        }
        return output; // if something goes wrong then it will still return something 
    }
};
