class Solution
{
public:
    long long nthFaithfulNum(int N)
    {
        long long temp = 1;
        long long ans = 0;
        while (N > 0)
        {
            int bit = N & 1; //finding the LSB
            ans += temp * bit;
            temp *= 7;
            N = N >> 1;
        }

        return ans;
    }
};