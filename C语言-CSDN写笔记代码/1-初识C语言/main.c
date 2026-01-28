// #include <stdio.h>

// int main()
// {
//     int a[] = {123, 234, 345};
//     int *p = a;
//     printf("a[0]=%d,a[1]=%d ,a[2]=%d \n", *p, *(p + 1), *(p + 2));
//     printf("p=%x, p+1=%x, p+2=%x\n", p, p + 1, p + 2);
//     printf("pp=%x\n", &p);
//     return 0;
// }


#include <stdio.h>
int main()
{
    char arr1[] = "bit";
    char arr2[] = {'b', 'i', 't'};
    char arr3[] = {'b', 'i', 't',  '\0'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);
    return 0;
}

