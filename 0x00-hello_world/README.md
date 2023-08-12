### ****C - Hello, World:****

**1. `gcc`: GNU Compiler Collection**

- **Definition:** `gcc` is the GNU Compiler Collection, used to compile and link C, C++, and other programming language source code into executable programs.
- **Syntax:** `gcc [options] sourcefile(s) -o outputfile`
- **Common Options:**
    - `c`: Compile only, producing object files.
    - `o outputfile`: Specify the name of the output executable file.
    - `Wall`: Enable most warning messages.
    - `g`: Generate debugging information.

**2. `printf` (Section 3): Formatted Output Conversion**

- **Definition:** `printf` is a library function used to format and print data to the standard output (typically the terminal).
- **Syntax:** `int printf(const char *format, ...);`
- **Common Format Specifiers:**
    - `%d`, `%i`: Integer.
    - `%f`: Floating-point number.
    - `%s`: String.
    - `%c`: Character.

**3. `puts`: Write String to Standard Output**

- **Definition:** `puts` is a library function used to write a string to the standard output followed by a newline character.
- **Syntax:** `int puts(const char *str);`

**4. `putchar`: Write Character to Standard Output**

- **Definition:** `putchar` is a library function used to write a single character to the standard output.
- **Syntax:** `int putchar(int char);`
