// Given a pattern and a string s, find if s follows the same pattern.
// Here follow means a full match, such that there is a bijection between
// a letter in pattern and a non-empty word in s.

// Constraints:

// 1 <= pattern.length <= 300
// pattern contains only lower-case English letters.
// 1 <= s.length <= 3000
// s contains only lowercase English letters and spaces ' '.
// s does not contain any leading or trailing spaces.
// All the words in s are separated by a single space.

class Solution {
public:
    bool wordPattern(string pattern, string s) {
      
    // vector initialization
    vector<string> v;
    string word;
    stringstream iss(s);
      
    // pushing word in vector
    while(iss>>word)
        v.push_back(word);
      
    if(v.size() != pattern.size())
        return false;
    
    // map initialization
    unordered_map<char,string>m;
    set<string>st;
    for(int i=0;i<pattern.size();i++)
    {
        if(m.find(pattern[i])!=m.end())
        {
            if(m[pattern[i]] != v[i])
                return false;
        }
        else
        {
            if(st.count(v[i])>0)
                return false;
            m[pattern[i]]= v[i];
            st.insert(v[i]);
        }
    }
    return true;
}
};
