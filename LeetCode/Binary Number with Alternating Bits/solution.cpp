#include <math.h>
class Solution {
public:
    bool hasAlternatingBits(unsigned long int n) {
        if(n%2==0)
        {
            n = 1.5*n + 1;
        }
        else
        {
            n = 3*n + 1;
        }
        float k = log10(n)/log10(4);
        if(floor(k)==ceil(k)) return true;
        else return false;
    }
};
