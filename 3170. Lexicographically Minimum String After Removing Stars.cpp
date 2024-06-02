class Solution {
public:
    string clearStars(string s) {

        int n = s.size();
        map<char, vector<int> > qtd;
        vector<bool> mark(n, false);

        for(int i = 0; i < n; i++){
            if(s[i] == '*' && !qtd.empty()){
                auto&q = (qtd.begin())->second;
                mark[q.back()] = true;
                q.pop_back();
                if(q.empty()) qtd.erase(qtd.begin());
            }
            else qtd[s[i]].push_back(i);
        }

        string ans = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '*' || mark[i]) continue;
            ans+= s[i];
        }

        return ans;
    }
};