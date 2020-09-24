class Solution {
public:
    int reverse(int x) {

        long flag = 0, rev = 0, y = x;
        
        if (y < 0) {
            y = y * -1;
            flag = 1;
        }
        
        while (y > 0) {
            int rem = y % 10;
            y /= 10;
            rev = (rev * 10) + rem;
        }
        
        if (rev > INT_MAX) return 0;
        
        if (flag == 0)  return rev;
        else return rev * -1;
            
    }
};
