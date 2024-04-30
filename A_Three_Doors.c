#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int key;
        scanf("%d", &key);
        int arr[4];

        for (int i = 0; i <= 3; i++)
        {
            scanf("%d", &arr[i]);
        }

        if (arr[key] == 0)
        {
            printf("NO\n");
            return;
        }
        key = arr[key];
        if (arr[key] == 0)
        {
            printf("N0\n");
            return;
        }
        printf("YES\n");
    }
    return 0;
}