class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for(auto& n: nums){
            if(count == 0) 
            candidate = n;
            if(candidate == n)
            count++;
            else count--;
        }
        return candidate;
    }
};