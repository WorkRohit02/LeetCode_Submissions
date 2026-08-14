class Solution {
public:

    vector<string> ans ;
    void result(string s , int open , int close , int n){
        if(s.size() == 2*n){
            ans.push_back(s) ;
            return ;
        }

        if(open < n){
            result(s + '(' , open+1 , close , n) ;
        }

        if(close < open){
            result(s+')' , open , close+1 , n) ;
        }
    }

    vector<string> generateParenthesis(int n) {
        
        result("" , 0, 0,  n) ;
        return ans ;

    }
};