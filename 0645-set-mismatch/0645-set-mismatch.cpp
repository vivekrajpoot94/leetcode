class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        // [1,2,2,4] initalsum=1+2+2+4=9 setsum = 1+2+4=7 
        // repeatednum=initialsum-setsum 9-7= 2
        // missingnum=n*(n+1)/2; 
     int n=nums.size();
     int initialsum=accumulate(nums.begin(),nums.end(),0);

     set<int>s;
     for(auto i:nums) s.insert(i);
     int setsum=accumulate(s.begin(),s.end(),0);

     int repeatednum = initialsum - setsum ; 

     int missingnum = n*(n+1)/2 - setsum;

     return{repeatednum ,missingnum};  
    }
};