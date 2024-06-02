class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        int ans = 1e9;
        set<int> dp_prev;

        for(auto&v: nums){
            set<int> dp_next;
            for(auto&s: dp_prev){
                dp_next.insert(s&v);
                ans = min(ans, abs(k - (s&v)));
            }
            dp_next.insert(v);
            ans = min(ans, abs(k-v));
            dp_prev = dp_next;
        }

        return ans;
    }
};