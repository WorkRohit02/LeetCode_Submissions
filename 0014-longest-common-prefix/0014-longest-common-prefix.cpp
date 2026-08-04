class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size() ;
        int fis = strs[0].length() ;

        int i = 0 ;
        for(i ; i<fis ; i++){
            char ch = strs[0][i] ;

            for(int j=1 ; j<n ; j++){
                if(strs[j][i] == ch){
                    continue ;
                }
                else{
                    return strs[0].substr(0,i) ;
                }
            }
        }

        return strs[0].substr(0,i) ;

    }
};