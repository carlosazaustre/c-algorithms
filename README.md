## Introduction to C Language

### Features
- Simple language Core that operates with libraries (e.g: I/O operations)
- Flexible, Structured Programming.
- Low-Level Memory Access through pointers.
- Reduced number of key/reserved words.
- Pass parameters by value and reference.
- Compiled.
- Typed.
- C is not real-time interpered and does not run in a VM. Should be compiled for a target platform

### Development Environment
- in MacOS we need install XCode and GCC (GNU C Compiler)

### Compilation Phases
1. Source Code (.c / .cpp)
2. Compiler
3. Object/Tarjet Program (.obj)
4. Linker + Libraries
5. Executable (.exe)

### Error Types in C
1. Syntactic Errors
  - Logic, Typed
2. Link Errors
  - Function invoqued, 
3. Execution Errors
  - e.g: square root of -1, division by zero
4. Semantic Errors
  - More difficultd to detect. The output is inexpected.

### Data types
- **char**: Characters.
- **int**: Integer number.
- **float**: Real Number with simple precission.
- **double**: Real Number with double precission.

|Type|Size(Bytes)|Range|
|---	|---	|---	|
|bit|1|0 o 1|
|char|1|0 ... 255|
|signed char|1|-128 ... 127|
|int|2|-32768 ... 32767|
|unsigned|2|0 ... 65535|
|long|4|-2147483648 ... 2147483647|
|unsigned long|4|0 ... 4294967295|
|float|4|-1.5*10^45 ... +3.4*10^38|

#### Variables
Piece of memory where a data is stored.

### Operators
1. Assigned 
  - (e.g: `=`, `var = expression`)
2. Aritmethycs
  - `()`, `*`, `/`, `%`, `+`, `-`
3. Relationals

|Operator|Example|Meaning|
|---|---|---|
|`==`| `x == y` | X is equal to Y |
|`!=`| `x != y` | X is not equal to Y |
|`>`| `x > y` | X is greater than Y | 
|`<`| `x < y` | X is less than Y | 
|`>=`| `x >= y` | X is greater or equal than Y | 
|`<=`| `x <= y` | X is less or equal than Y | 

4. Logic
Return `true` or `false`. In C, does not exist the `boolean` value.
|Operator|Logic Operation|
|---|---|
|`&&` | AND|
|`|| `| OR|
|`!`| NOT|

- `true && true = true`
- `true && false = false`
- `false && true = false`
- `false && false = false`

- `true || true = true`
- `true || false = true`
- `false || true = true`
- `false || false = false`

- `!true = false`
- `!false = true`

## Data Output
Standard output data. by default is the screen. function: `printf`

- `%c`: Shows a character
- `%d`: Shows a integer number
- `%x`: Shows a integer number in hexadecimal way.
- `%X.Yf`: Shows a real number with X ineger value and Y decimal value.
- `%s`: Shows a string characters.

## Data Input
Enter data in the code, by default is the keyboard. function: `scanf`.
