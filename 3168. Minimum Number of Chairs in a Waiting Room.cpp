class Solution {
public:
    int minimumChairs(string s) {
        int ans = 0;
        int cur = 0;

        for(auto&c : s){
            cur+= (c == 'E' ? 1 : -1);
            ans = max(ans, cur);
        }

        return ans;
    }
};