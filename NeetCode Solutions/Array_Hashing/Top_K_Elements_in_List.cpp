class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> occur;
        vector<vector<int>> freq(nums.size() + 1);  
        // what is the i in this example? 
        // "i" is the element in nums 
        for (const auto& i : nums) {
            occur[i] = 1 + occur[i]; // adding +1 because count[n] is initially 0  
        }
    }
};
