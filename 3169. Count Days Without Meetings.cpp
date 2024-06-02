    class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
        int ans = 0;
        sort(meetings.begin(), meetings.end());
        int cur = 0;
        for(auto&m: meetings){
            if(cur + 1 < m[0]) ans+= (m[0] - cur - 1);
            cur = max(cur, m[1]);
        }
        
        return ans + days - cur;
    }
};