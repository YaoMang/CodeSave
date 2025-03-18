class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string ret;
            if(!strs.empty()){
                ret = strs.front();
            }
    
            for(int i = 1; i < strs.size(); i++){ // Traverse remainings
                auto retpos = ret.begin();
                bool allpass = true;
                for(auto& c : strs[i]){
                    if(*retpos == c && retpos != ret.end()){
                        // cout << "Now compair:" << *retpos << "and" << c << "\n";
                        retpos++;
                    }
                    else{
                        allpass = false;
                        // size_t pos = 0;
                        // size_t len = distance(ret.begin(),retpos);
                        // ret = ret.substr(pos, len);
                        
                        // or use it directly
                        
                        // string newstring(ret.begin(), retpos);
                        // ret = move(newstring);
                        
                        
                        // or use erase()
                        ret.erase(retpos, ret.end());
    
                        // cout << ret << "\n";
                    }
                }
    
                // improve efficiency
                if(ret.empty()){
                    break;
                }
    
                if(allpass && ret.size() > strs[i].size()){
                    ret = strs[i];
                }
            }
    
            return ret;
        }
    };