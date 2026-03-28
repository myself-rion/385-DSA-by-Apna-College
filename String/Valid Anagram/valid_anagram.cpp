class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // using sorting
        int len1 = s.size(), len2 = t.size();
        if (len1 != len2)
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;

````````````````````````````````````````````````````
        // using constant array
        int store[26] = {0};

        for (int i = 0; i < len1; ++i)
        {
            store[s[i] - 'a']++;
            store[t[i] - 'a']--;
        }

        for (int &val : store)
        {
            if (val != 0)
                return false;
        }

        return true;
    }
};