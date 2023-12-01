#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int i = 0, j = 0, k = 0, l = 0;
        while (i < word1.size() && j < word2.size())
        {
            if (word1[i][k] != word2[j][l])
                return false;
            k++;
            l++;
            if (word1[i].size() == k)
            {
                k = 0;
                i++;
            }
            if (word2[j].size() == l)
            {
                l = 0;
                j++;
            }
        }
        if (i == word1.size() && j == word2.size())
            return true;
        else
            return false;
    }
};