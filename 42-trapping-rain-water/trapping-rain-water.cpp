class Solution {
public:
    int trap(vector<int>& height) {

        int l=0;
        int r= height.size()-1;
        int Lmax=0;
        int Rmax=0;
        int total=0;

        while(l<=r){
            if(height[l]<=height[r]){
                Lmax=max(Lmax,height[l]);
                total=total+Lmax-height[l];
                l++;
            }
            else{
                Rmax=max(Rmax,height[r]);
                total=total+Rmax-height[r];
                r--;
            }
        }
        return total;


    }
};