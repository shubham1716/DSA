class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t str =s.find(part);
        while(str!=string::npos){
           s.erase(str,part.size());
           str =s.find(part);
        }
       return s;
       
        }
};