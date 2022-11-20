# C Programming Language

``` c
// standard library
#include <stdio.h>

// type definitions (int is 4 bytes) and main function (entry point)
int main(void) {
    // print to stdout
    printf("Hello, World!");
    // return 0 to indicate success
    return 0;
}
```

## compile and run

``` bash
gcc hello.c -o hello && .\hello.exe
Hello, World!
```

## Types

### Char

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| char | 1byte | 8bit | -2 ^ 8 to 2 ^ 8 -1 |
| signed char | 1byte | 8bit | -2 ^ 8 to 2 ^ 8 -1 |
| unsigned char | 1byte | 8bit | 0 to 2 ^ 8 |

### Int

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| int | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| signed int | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| unsigned int | 4bytes | 32bit | 0 to 2 ^ 32 |
| short int | 2bytes | 16bit | -2 ^ 16 to 2 ^ 16 -1 |
| signed short int | 2bytes | 16bit | -2 ^ 16 to 2 ^ 16 -1 |
| unsigned short int | 2bytes | 16bit | 0 to 2 ^ 16 |
| long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| signed long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| unsigned long int | 8bytes | 64bit | 0 to 2 ^ 64 |
| long long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| signed long long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| unsigned long long int | 8bytes | 64bit | 0 to 2 ^ 64 |

### Float

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| float | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| double | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| long double | 16bytes | 128bit | -2 ^ 128 to 2 ^ 128 -1 |
