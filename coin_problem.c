#include <stdio.h>
#define COINS_SIZE 6

int coins[] = {1, 5, 10, 25, 50, 100 };

void solve(int value)
{
    int i;
    int c = 0;
    int ans[1000] = {0};

    for (i = COINS_SIZE - 1; i >= 0; i--)
    {
        while (value >= coins[i])
        {
            value -= coins[i];
            ans[c++] = coins[i];
        }
    }

    for (i = 0; i < c; i++) {
        printf("%d ", ans[i]);
    }

    puts("");

}

int main()
{
    solve(93);
    return 0;
}
