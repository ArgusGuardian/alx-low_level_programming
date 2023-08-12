### ****C - Variables, if, else, while:****

**1. Arithmetic Operators:**
Arithmetic operators are used to perform mathematical calculations.

- `+`: Addition.
- ``: Subtraction.
- ``: Multiplication.
- `/`: Division.
- `%`: Modulus (remainder).

**2. Logical Operators:**
Logical operators are used to perform logical operations on boolean values (`0` or `1`).

- `&&`: Logical AND.
- `||`: Logical OR.
- `!`: Logical NOT.

**3. Relational Operators:**
Relational operators are used to compare values.

- `==`: Equal to.
- `!=`: Not equal to.
- `<`: Less than.
- `>`: Greater than.
- `<=`: Less than or equal to.
- `>=`: Greater than or equal to.

**4. TRUE and FALSE in C:**
In C, `0` is considered as FALSE, and any non-zero value (usually `1`) is considered as TRUE.

**5. Boolean Operators:**
Boolean operators are used to manipulate boolean values.

- `&&`: Logical AND.
- `||`: Logical OR.
- `!`: Logical NOT.

**6. `if` and `if...else` Statements:**
Conditional statements are used to make decisions in code.

```c
if (condition) {
    // Code to execute if condition is true.
} else {
    // Code to execute if condition is false (optional).
}

```

**7. Comments:**
Comments are used to add explanatory notes to code.

```c
// This is a single-line comment.

/*
   This is a multi-line
   comment.
*/

```

**8. Declaring Variables:**

```c
char myChar;
int myInt;
unsigned int myUnsignedInt;

```

**9. Assigning Values:**

```c
myChar = 'A';
myInt = 42;
myUnsignedInt = 12345;

```

**10. Printing Values with `printf`:**

```c
printf("Character: %c\\n", myChar);
printf("Integer: %d\\n", myInt);
printf("Unsigned Integer: %u\\n", myUnsignedInt);

```

**11. Using `while` Loop:**
The `while` loop executes a block of code repeatedly as long as a condition is true.

```c
while (condition) {
    // Code to execute repeatedly.
}

```

**12. Using Variables with `while` Loop:**

```c
int count = 0;
while (count < 5) {
    printf("Count: %d\\n", count);
    count++;
}

```

**13. ASCII Character Set:**
ASCII is a character encoding standard representing characters with numerical values. For example, `'A'` is `65`.

**14. GCC Flags -m32 and -m64:**

- `m32`: Compile for 32-bit target.
- `m64`: Compile for 64-bit target.
