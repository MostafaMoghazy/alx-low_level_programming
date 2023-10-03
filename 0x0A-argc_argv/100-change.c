#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mincoin num for money
 * @argc: argument count
 * @argv: arguments
 * Return: (0) success
 */
int main(int argc, char **argv)
{
    int cents[] = {25, 10, 5, 2};
    unsigned int x;
    char *ptr;
    int tot, count;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    tot = strtol(argv[1], &ptr, 10);
    count = 0;

    if (!*ptr)
    {
        while (tot > 1)
        {
            for (x = 0; x < sizeof(cents[x]); x++)
            {
                if (tot >= cents[x])
                {
                    count += tot / cents[x];
                    tot = tot % cents[x];
                }
            }
        }
        if (tot == 1)
            count++;
    }
    else
    {
        printf("Error\n");
        return (1);
    }

    printf("%d\n", count);
    return (0);
}
