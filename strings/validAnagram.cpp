/*1. Sorting
Time complexity: O(nlogn+mlogm)
Space complexity: O(1) or O(n+m) depending on the sorting algorithm.*/



class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()) {
            return false; 
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
