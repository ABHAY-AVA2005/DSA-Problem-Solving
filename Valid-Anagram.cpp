1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        if(s==t) return true;
7        else return false;
8        
9    }
10};