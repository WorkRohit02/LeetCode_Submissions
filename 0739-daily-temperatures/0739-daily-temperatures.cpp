class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();

        vector<int> ans(n, 0);
        stack<int> t1;

        t1.push(n - 1);

        for(int i = n - 2; i >= 0; i--) {

            while(!t1.empty() && temperatures[i] >= temperatures[t1.top()]) {
                t1.pop();
            }

            if(!t1.empty()) {
                ans[i] = t1.top() - i;
            }

            t1.push(i);
        }

        return ans;

    }
};