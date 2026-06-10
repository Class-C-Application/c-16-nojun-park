#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = NULL;

    p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    *p = 10;
    printf("저장된 값: %d\n", *p);

    free(p);
    p = NULL;

    return 0;
}
