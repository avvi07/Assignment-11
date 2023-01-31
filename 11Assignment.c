// 1. Write a function to calculate LCM of two numbers. (TSRS)

// #include<stdio.h>
// int lcm(int,int);
// int main()
// {
//     int a,b,x;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     x = lcm(a,b);
//     return 0;
// }
// int lcm(int a,int b)
// {
//     int i;
//     for ( i = 1; i <= a*b; i++)
//     {
//         if ((i%a==0) && (i%b==0))
//         {
//             break;
//         }

//     }
//     printf("%d",i);

//     return i;
// }

// 2. Write a function to calculate HCF of two numbers. (TSRS)

// #include<stdio.h>
// int hcf(int,int);
// int main()
// {
//     int a,b,x;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     x = hcf(a,b);
//     return 0;
// }
// int hcf(int a,int b)
// {
//     int h,i;
//     int min = a < b ? a : b ;
//     for ( i = 1; i <= min; i++)
//     {
//         if ((a%i==0) && (b%i==0))
//         {
//             h = i;
//         }

//     }
//     printf("%d",h);

//     return h;
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)

// #include<stdio.h>
// int check(int);
// int main()
// {
//     int x,n;
//     printf("Enter a numbers: ");
//     scanf("%d",&x);
//     n = check(x);
//     if (n>=2)
//     {
//         printf("%d is not a prime number.",x);
//     }
//     else
//     {
//         printf("%d is a prime number.",x);
//     }
//     return 0;
// }
// int check(int a)
// {
//     int i,c;
//     for ( i = 1; i <= a/2; i++)
//     {
//         if (a%i==0)
//         {
//             c++;
//         }
//     }

//     return c;
// }

// 4. Write a function to find the next prime number of a given number. (TSRS)

// #include<stdio.h>
// int nxt(int);
// int main()
// {
//     int x,n,c;
//     printf("Enter a numbers: ");
//     scanf("%d",&x);
//     c = nxt(x);
//     printf("%d is next prime number.",c);
//     return 0;
// }
// int nxt(int a)
// {
//     int i,j,c;
//     for ( i = a+1; 1 ; i++)
//     {
//         c = 0;
//         for (  j= 2; j <= i/2; j++)
//         {
//             if (i % j == 0)
//             {
//                 c++;
//             }

//         }
//         if (c == 0)
//         {
//             break;
//         }

//     }
//     return i;
// }

// 5. Write a function to print first N prime numbers (TSRN)

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int a)
// {
//     int i,j,c;
// for ( i = 2; i <= a; i++)
// {
//     c = 0;
//     for ( j = 2; j <= i/2; j++)
//     {
//         if (i%j == 0)
//         {
//             c++;
//         }

//     }
//     if (c == 0)
//     {
//         printf("%d ",i);
//     }

// }

// }

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

// #include<stdio.h>
// void print(int,int);
// int main()
// {
//     int x,y;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&x,&y);
//     print(x,y);
//     return 0;
// }
// void print(int a,int b)
// {
//     int i,j,c;
//     for ( i = a+1; i <= b-1; i++)
//     {
//         c = 0;
//         for ( j = 2; j <= i/2; j++)
//         {
//             if (i%j == 0)
//             {
//                 c++;
//             }

//         }
//         if (c == 0)
//         {
//             printf("%d ",i);
//         }

//     }

// }

// 7. Write a function to print first N terms of Fibonacci series (TSRN)

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     int i,f1=0,f2=1,b,c;
//     printf("%d %d",f1,f2);
//     for ( i = 3; i <= n; i++)
//     {
//         b = f1+f2;
//         printf(" %d",b);
//         f1 = f2;
//         f2 = b;
//     }
// }

// 8. Write a function to print PASCAL Triangle. (TSRN)

// #include <stdio.h>
// void pascal(int);
// int main()
// {
//     int x;
//     printf("Enter the values: ");
//     scanf("%d",&x);
//     pascal(x);
//     return 0;
// }
// void pascal(int n)
// {
//     int i,j;
//     for (i = 0; i <= n; i++)
//     {
//         for ( j = 0; j <= n-i; j++)
//         {
//             printf("  ");
//         }
        
//         for (j = 0; j <= i; j++)
//        {
//             int a,x,y,fn = 1, fr = 1, fnr = 1,ncr = 1;

//             for (a = 1; a <= i; a++)
//             {
//                 fn = fn * a;
//             }

//             for (a = 1; a <= j; a++)
//             {
//                 fr = fr * a;
//             }

//             for (a = 1; a <= (i - j); a++)
//             {
//                 fnr = fnr * a;
//             }

//             ncr = fn/(fr*fnr);
//             printf("% 4d",ncr);
//         }
//         printf("\n");
//     }

// }

// 9. Write a program in C to find the square of any number using the function.

// #include<stdio.h>
// int square(int);
// int main()
// {
//     int x,s;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     s = square(x);
//     printf("The square of a given number is %d",s);
//     return 0;
// }
// int square(int n)
// {
//     int a;
//     a = n*n;
//     return a;
// }

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
// function.

// #include<stdio.h>
// int series();
// int main()
// {
//     int x;
//     x = series();
//     printf("The sum of the series is %d.",x);
//     return 0;
// }
// int series()
// {
//     int i,j,f = 1,a = 0;

//     for ( i = 1; i <= 6; i++)
//     {
//         f=f*i;
//         a = a+(f/i);
//     }
//     return a;
// }