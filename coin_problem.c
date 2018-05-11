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

    puts("RESULTADO: ");
    for (i = 0; i < c; i++) {
        if (ans[i] != 100)
            printf("%dc ", ans[i]);
        else 
            printf("1R ");
        
    }

    puts("");

}

int main()
{
    int num;

    printf("Insira o numero: ");
    scanf("%d", &num);

    solve(num);
    return 0;
}
