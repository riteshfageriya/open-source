class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int lucky=-1;
        for(auto it:mpp){
            if(it.first==it.second) {
                lucky=max(lucky,it.first);
            }
        }
        return lucky;
        
    }
};