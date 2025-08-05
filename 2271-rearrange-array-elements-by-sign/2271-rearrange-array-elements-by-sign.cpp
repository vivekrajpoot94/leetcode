class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posindex = 0, negindex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negindex]=nums[i];
                negindex+=2;
            }
            else{
                ans[posindex]=nums[i];
                posindex+=2;
            }
        }
        return ans;
    }
};
// isme hum check karte ha ki nums[i] positive ha ya negative 
// agar postive  hua to odd index par rakege aur negtive hua to even index par 
// uske baad index ko +2 se age bada dege  