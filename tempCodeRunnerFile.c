#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int binarySearch(int *a, int key, int imin, int imax)
{
    int imid;

    while(imin <= imax)
    {
        imid = (imin + imax) / 2;
        if (a[imid] == key)
        {
            return imid;
        }
        else if (key > a[imid])
        {
            imin = imid + 1;
        }
        else
        {
            imax = imid - 1;
        }
    }

}

int main()
{
    int *arr = NULL;
    int num, key, loc, i;

    printf("How many numbers: ");
    scanf("%d", num);

    arr = (int *)malloc(num * sizeof(int));
    printf("Enter the numbers:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search key: ");
    scanf("%d", &key);

    loc = binarySearch(arr, key, 0, num - 1);

    if (loc == -1)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found at position %d\n", loc + 1);
    }

    getch();
    return (0);
}
