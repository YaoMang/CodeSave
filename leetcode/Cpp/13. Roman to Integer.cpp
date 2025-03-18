class Solution {
    public:
        int romanToInt(string s) {
            int sum = 0;
            for(int i = 0; i < s.size(); i++){
                if(i < s.size() - 1 && rti[s[i]] < rti[s[i + 1]]){
                    // IV CM IX
                    sum -= rti[s[i]];
                }
                else{
                    sum += rti[s[i]];
                }
            }
            
            return sum;
        }
    
        unordered_map<char, int> rti = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
    };