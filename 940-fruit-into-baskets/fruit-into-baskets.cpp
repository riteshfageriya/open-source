class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;

        int i = 0;
        int j = 0;

        int maxi = 0;
        int temp = 0;
        while(j < fruits.size()){
            mp[fruits[j]]++;
            if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]] == 0){
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};
