/* ==========================================================
   ALL C OPERATORS DEMO
   Categories: Arithmetic, Relational, Logical, Bitwise,
               Conditional, Special, Assignment, Increment/Decrement
   ========================================================== */

#include <stdio.h>

int main() {

    int a = 12, b = 5;   // used for most sections
    int x, y;

    /* ---------------------------------------------------
       1. ARITHMETIC OPERATORS  : +  -  *  /  %
       --------------------------------------------------- */
    printf("===== ARITHMETIC OPERATORS =====\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);   // Addition
    printf("a - b = %d\n", a - b);   // Subtraction
    printf("a * b = %d\n", a * b);   // Multiplication
    printf("a / b = %d\n", a / b);   // Division (integer)
    printf("a %% b = %d\n\n", a % b); // Modulus (remainder)

    /* ---------------------------------------------------
       2. RELATIONAL OPERATORS  : ==  !=  >  <  >=  <=
       --------------------------------------------------- */
    printf("===== RELATIONAL OPERATORS =====\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

    /* ---------------------------------------------------
       3. LOGICAL OPERATORS  : &&  ||  !
       --------------------------------------------------- */
    printf("===== LOGICAL OPERATORS =====\n");
    int p = 1, q = 0;   // treated as boolean: 1 = true, 0 = false
    printf("p = %d, q = %d\n", p, q);
    printf("p && q : %d\n", p && q);   // Logical AND
    printf("p || q : %d\n", p || q);   // Logical OR
    printf("!p     : %d\n", !p);       // Logical NOT
    printf("!q     : %d\n\n", !q);

    /* ---------------------------------------------------
       4. BITWISE OPERATORS  : &  |  ^  ~  <<  >>
       --------------------------------------------------- */
    printf("===== BITWISE OPERATORS =====\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a & b  = %d\n", a & b);    // Bitwise AND
    printf("a | b  = %d\n", a | b);    // Bitwise OR
    printf("a ^ b  = %d\n", a ^ b);    // Bitwise XOR
    printf("~a     = %d\n", ~a);       // Bitwise NOT (1's complement)
    printf("a << 2 = %d\n", a << 2);   // Left shift
    printf("a >> 2 = %d\n\n", a >> 2); // Right shift

    /* ---------------------------------------------------
       5. CONDITIONAL (TERNARY) OPERATOR  :  ?:
       --------------------------------------------------- */
    printf("===== CONDITIONAL (TERNARY) OPERATOR =====\n");
    int max = (a > b) ? a : b;
    printf("Larger of a and b using ?: is %d\n\n", max);

    /* ---------------------------------------------------
       6. SPECIAL OPERATORS  : sizeof, & (address-of),
          * (dereference/pointer), , (comma)
       --------------------------------------------------- */
    printf("===== SPECIAL OPERATORS =====\n");

    // sizeof operator
    printf("sizeof(int)   = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(a)     = %zu bytes\n", sizeof(a));

    // & (address-of) and * (dereference / pointer) operators
    int num = 100;
    int *ptr = &num;          // & gets address of num
    printf("Value of num       = %d\n", num);
    printf("Address of num (&num) = %p\n", (void *)&num);
    printf("Pointer ptr stores  = %p\n", (void *)ptr);
    printf("Dereferencing *ptr  = %d\n", *ptr);

    // comma operator
    int c1, c2;
    c1 = (c2 = 5, c2 + 10);   // comma evaluates left to right, returns rightmost
    printf("Comma operator: c2 = %d, c1 = %d\n\n", c2, c1);

    /* ---------------------------------------------------
       7. ASSIGNMENT OPERATORS
          =  +=  -=  *=  /=  %=  &=  |=  ^=  <<=  >>=
       --------------------------------------------------- */
    printf("===== ASSIGNMENT OPERATORS =====\n");
    x = 10;
    printf("x = 10            -> x = %d\n", x);

    x += 5;   printf("x += 5            -> x = %d\n", x);
    x -= 3;   printf("x -= 3            -> x = %d\n", x);
    x *= 2;   printf("x *= 2            -> x = %d\n", x);
    x /= 4;   printf("x /= 4            -> x = %d\n", x);
    x %= 4;   printf("x %%= 4            -> x = %d\n", x);
    x &= 3;   printf("x &= 3            -> x = %d\n", x);
    x |= 8;   printf("x |= 8            -> x = %d\n", x);
    x ^= 5;   printf("x ^= 5            -> x = %d\n", x);
    x <<= 2;  printf("x <<= 2           -> x = %d\n", x);
    x >>= 1;  printf("x >>= 1           -> x = %d\n\n", x);

    /* ---------------------------------------------------
       8. INCREMENT / DECREMENT OPERATORS  : ++  --
          (prefix and postfix forms)
       --------------------------------------------------- */
    printf("===== INCREMENT / DECREMENT OPERATORS =====\n");
    y = 5;
    printf("y = 5\n");
    printf("y++ (postfix, prints then increments) : %d\n", y++);
    printf("After y++ , y = %d\n", y);

    printf("++y (prefix, increments then prints)  : %d\n", ++y);
    printf("After ++y , y = %d\n", y);

    printf("y-- (postfix, prints then decrements) : %d\n", y--);
    printf("After y-- , y = %d\n", y);

    printf("--y (prefix, decrements then prints)  : %d\n", --y);
    printf("After --y , y = %d\n", y);

    return 0;
}
