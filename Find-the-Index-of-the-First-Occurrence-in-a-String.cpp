1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4
5        int n = haystack.length();
6    int m = needle.length();
7    if (m > n) return -1;
8    int i = 0, j = 0;
9    while (i < n) {
10        if (haystack[i] == needle[j]) {
11        i++;
12        j++;
13        if (j == m) return i - m;
14        }
15        else {
16        i = i - j + 1;
17        j = 0;
18      }
19    }
20     return -1;
21        }
22        
23   
24};
25
26
27/*
28int strStr(string haystack, string needle) {
29return haystack.find(needle);
30}
31*/