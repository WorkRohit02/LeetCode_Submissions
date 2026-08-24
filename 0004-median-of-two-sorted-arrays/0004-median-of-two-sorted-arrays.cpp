class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int k = nums2.size() ;
        for(int i=0 ; i<k ; i++){
            nums1.push_back(nums2[i]) ;
        }
        int n = nums1.size() ; 
        
        sort(nums1.begin() , nums1.end()) ;
        
        if(n%2 == 0){
            double k = nums1[(n/2)-1] + nums1[(n/2)] ;
            return k/2 ;
        }
        
        else{
            return nums1[n/2] ;
        }
    }
};