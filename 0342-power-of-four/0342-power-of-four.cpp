class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if (n <0) return false;
        if (n == 1) return true;
        if (n == 0) return false;        
        while (n>0){
            if (n%4 !=0 and n!=1) return false;                       
            n = n/4;
        }
        return true;

    }
};