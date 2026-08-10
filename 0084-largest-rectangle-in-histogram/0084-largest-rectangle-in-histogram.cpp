class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size() ;
        int ans = 0 ;

        stack<int> st ;

        for(int i=0 ; i<=n ; i++){
            int curr;

            if(i == n)
                curr = 0;
            else
                curr = heights[i];

            while(!st.empty() && curr < heights[st.top()]){

                int h = heights[st.top()] ;
                st.pop() ;

                int width ;

                if(st.empty()){
                    width = i ;
                }
                else{
                    width = i - st.top() - 1 ;
                }

                ans = max(ans , h * width) ;

            }
            st.push(i) ;
        }

        return ans ;

    }
};