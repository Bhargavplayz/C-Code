#include <stdio.h>

//
// #1 int main()
// {
//     printf("Hello, World!\n");
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #2 int main()
// {
//     int a = 0, b = 0, c = 0;

//     printf("Enter Number a : ");
//     scanf("%d", &a);

//     printf("Enter Number b : ");
//     scanf("%d", &b);

//     printf("Enter Number c : ");
//     scanf("%d", &c);

//     printf("Your Sum of a, b and c is : %d", a + b + c);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #3 int main()
// {
//     int a = 0, b = 0;

//     printf("Enter Number a: ");
//     scanf("%d", &a);

//     printf("Enter Number b: ");
//     scanf("%d", &b);

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After Swapping \n");
//     printf("a = %d, b = %d", a, b);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #4 int main()
// {
//  int a = 0, b = 0, c = 0;

//  printf("Enter Number a: ");
//  scanf("%d", &a);

//  printf("Enter Number b: ");
//  scanf("%d", &b);

//     c = a;
//     a = b;
//     b = c;

//     printf("After Swapping \n");
//     printf("a = %d, b = %d", a, b);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #5 int main()
// {

//     int a = 0, b = 0, c = 0;

//     printf("Enter Side a (Height): ");
//     scanf("%d", &a);

//     printf("Enter Side b (Base): ");
//     scanf("%d", &b);

//     int area = 0.5 * b * a;
//     printf("Area of Triangle is: %d", area);
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #6 int main()
// {
//     int m = 0, p = 0, c = 0, e = 0, t = 0;

//     printf("Enter Math Marks : ");
//     scanf("%d", &m);

//     printf("Enter Physics Marks : ");
//     scanf("%d", &p);

//     printf("Enter Chemistry Marks : ");
//     scanf("%d", &c);

//     printf("Enter English Marks : ");
//     scanf("%d", &e);

//     printf("Enter Telugu Marks : ");
//     scanf("%d", &t);

//     int total_marks = m + p + c + e + t;
//     int avg_marks = total_marks / 5;

//     printf("Your Total Marks are: %d\n", total_marks);
//     printf("Your Average Marks are: %d\n", avg_marks);
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #7 int main()
// {
//     int a = 0;

//     do
//     {
//         a = a + 1;
//         printf("%d\n", a);

//     } while (a < 10);
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// #8 int main()
// {
//     int a = 0, b = 0;

//     printf("Enter Number a: ");
//     scanf("%d", &a);

//     printf("Enter Number b: ");
//     scanf("%d", &b);

//     if (a > b)
//     {
//         printf("%d(a) is Greater than %d(b)", a, b);
//     }

//     else
//     {
//         printf("%d(b) is Greater than %d(a)", b, a);
//     }
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// int main()
// {
//     char name[50];
//     printf("Enter Your Name: ");
//     scanf("%s", name);

//     char roll[50];
//     printf("Enter Your Roll.No: ");
//     scanf("%s", roll);

//     char sec[50];
//     printf("Enter Your Section: ");
//     scanf("%s", sec);

//     char cllg[50];
//     printf("Enter Your College Name: ");
//     scanf("%s", cllg);

//     printf("You are %s, Going by Roll No. %s, of %s Section, from %s College.", name, roll, sec, cllg);
// }

//----------------------------------------------------------------------------------------------------------------------------------//