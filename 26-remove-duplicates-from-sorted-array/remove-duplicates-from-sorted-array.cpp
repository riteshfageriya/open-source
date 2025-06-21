class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     set<int> st;

    //     int n=nums.size();
    //    for(int i=0;i<n;i++)
    //    {
    //          st.insert(nums[i]);
    //     }
    //     int j=0;
    //     for(auto it:st){
    //         nums[j]=it;
    //         j++;
    //     }
    //     return j;
     // in this the space complexity is o(n) and time complexitiy is n +nlogn
 // optimal solution 
    int i=0;
    int n=nums.size();
    for(int j=1;j<n;j++){
    if(nums[j]!=nums[i]){
     nums[i+1]=nums[j] ;
    i++;}
    
    }
    return i+1;
    }
};
 // in this the space complexity is o(n) and time complexitiy is n +nlogn
 // optimal 
 
  