class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        vector<vector<int>> ans ;

        sort(intervals.begin() , intervals.end()) ;
        int lt = intervals[0][1] , st = intervals[0][0] ;

        for (int i=1 ; i<intervals.size() ; i++){

            if(intervals[i][0] > lt){
                ans.push_back({st , lt}) ;
                lt = intervals[i][1];
                st = intervals[i][0];
            }
            else{
                lt = max(lt , intervals[i][1]) ;
            }

        }
        ans.push_back({st, lt});
        return ans ;
    }
};