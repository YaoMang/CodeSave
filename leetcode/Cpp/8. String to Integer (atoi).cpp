// 31 min

class Solution {
    public:
        int myAtoi(string s) {
            bool SF = false;
    
            // Ignoring space
            int pos = 0;
            while(s[pos] == ' ')
                pos++;
            
            // Check Negative or Positive
            if(s[pos] == '-'){
                SF = true;
                pos++;
            }
            else if(s[pos] == '+')
                pos++;
            
            // Ignoring Leading zero
            while(s[pos] == '0')
                pos++;
            
            // Start reading
            string atoiStr;
            while(s[pos] <= '9' && s[pos] >= '0'){
                atoiStr.push_back(s[pos]);
                pos++;
            }
    
            // atoi convert
            int ret = 0;
            int num;
            for(auto& c : atoiStr){
                num = c - 48;
    
                if(ret < INT_MIN / 10)
                    return INT_MIN;
                else if(ret > INT_MAX / 10)
                    return INT_MAX;
    
                ret *= 10;
                if(SF){
                    if(INT_MIN + num > ret)
                        return INT_MIN;
                    ret -= num;
                }
                else{
                    if(INT_MAX - num < ret)
                        return INT_MAX;
                    ret += num;
                }
            }
            return ret;
        }
    };