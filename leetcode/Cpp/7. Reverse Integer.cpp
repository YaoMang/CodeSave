// 30min

class Solution {
    public:
        int reverse(int x) {
            char digits = 0;
            int ret = 0;
    
            int const iINT_MIN = 0x80000000;
            int const iINT_MAX = 0x7fffffff;
    
            for(int i = 0; i < 10 && x != 0; ++i){
                digits = x % 10;
                x /= 10;
    
                if(ret < iINT_MIN/10 || ret > iINT_MAX/10)
                    return 0;
                
                ret *= 10;
                ret += digits;
            }
            return ret;
        }
    };