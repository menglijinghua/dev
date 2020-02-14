#include <iostream>
using namespace std;
int dp[32][32];
int main()
{
    int n, m;
    cin >> n>>m;
    dp[1][2] = dp[1][n] = 1;
    for (int i = 2; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j == 1)
                dp[i][j] = dp[i-1][2] + dp[i-1][n];
            else if (j == n)
                dp[i][j] = dp[i-1][1] + dp[i-1][n - 1];
            else
                dp[i][j] = dp[i-1][j - 1] + dp[i-1][j + 1];
        }
    }
    cout<<dp[m][1]<<endl;
    system("pause");
    return 0;
}