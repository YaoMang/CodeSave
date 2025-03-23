class Solution {
    public:
        double myPow(double x, int n) {
            vector<double> preCal;
            double res = x;
            long num = n;
            if(num < 0){
                res = 1/x;
                num = -num;
            }
    
            // 预先计算每个乘方的值
            for(int i = 0; i < sizeof(num) * 8; i++){
                preCal.push_back(res);
                res *= res;
            }
    
            // 计算结果
            res = 1;
            int cnt = 0;
            while(num){
                if(num & 1){
                    res *= preCal[cnt];
                }
                num /= 2;
                cnt++;
            }
    
            return res;
        }
    };