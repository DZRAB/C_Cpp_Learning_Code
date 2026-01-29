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


//#include <stdio.h>
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = {'b', 'i', 't'};
//   // char arr3[] = {'b', 'i', 't',  '\0'};
//    printf("%s\n", &arr1);
//    printf("%s\n", &arr2);
//   // printf("%s\n", arr3);
//    return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
// 
///* 要生成和返回随机数的函数 */
//int * getRandom( )
//{
//  static int  r[10];
//  int i;
// 
//  /* 设置种子 */
//  srand( (unsigned)time( NULL ) );
//  for ( i = 0; i < 10; ++i)
//  {
//     r[i] = rand();
//     printf( "r[%d] = %d\n", i, r[i]);
// 
//  }
// 
//  return r;
//}
// 
///* 要调用上面定义函数的主函数 */
//int main ()
//{
//   /* 一个指向整数的指针 */
//   int *p;
//   int i;
// 
//   p = getRandom();
//   for ( i = 0; i < 10; i++ )
//   {
//       printf( "*(p + %d) : %d\n", i, *(p + i));
//   }
// 
//   return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int *pnum = &num;//取出num的地址并赋值给pnum 
//	//注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//	printf("%p\n", pnum);//打印地址，%p是以地址的形式打印
//	printf("%d\n", *pnum);//使用指针，*就是解引用，此时打印的就是num的值
//	return 0;
//}


//#include <stdio.h>
////指针变量的大小取决于地址的大小
////32位平台下地址是32个bit位（即4个字节）
////64位平台下地址是64个bit位（即8个字节）
//int main()
//{
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}

//#include <stdio.h>
//
//struct Stu
//{
//    char name[20];//名字
//    int age;      //年龄
//    char sex[5];  //性别
//    char id[15]; //学号
//};
//
////定义结构体变量并按照成员定义顺序初始化，使用时必须加 struct 关键字
//struct Stu s1 = {"张三", 20, "男", "20180101"};
////初始化数量不足成员数量，则按照成员定义顺序部分初始化，后面自动为0
//struct Stu s2 = {"李四", 20, "男"};
////C99特性，最灵活初始化
//struct Stu s3 = {.name = "王五", .age = 20};
//int main()
//{
//
//	//.为结构成员访问操作符
//	printf("name = %s age = %d sex = %s id = %s\n", s3.name, s3.age, s3.sex, s3.id);
//	//->操作符
//	struct Stu *ps = &s3;
//	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//	return 0;

//}

#include <stdio.h>
#include "test.h"
 
int addtwonum()
{
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}
 
int main()
{
    int result;
    // 调用函数 addtwonum
    result = addtwonum();
    
    printf("result 为: %d",result);
    return 0;
}

