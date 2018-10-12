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