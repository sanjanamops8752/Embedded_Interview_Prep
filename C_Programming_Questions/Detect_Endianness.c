//endianness defines the byte order used to store multi-byte data type
//if we give system a value = 0x12345678, does it store LSB first or MSB first?
//Big Endian - Stores MSB first (at the lowest address) - 0z120x340x560x78
//Little Endian -Stores LSB at the lowest address - 0x870x650x430x21
//When we say a value is stored at the “lowest address,” we mean it’s placed in the first available slot in memory.

/*  High Address (e.g., 0xFFFF)
     |
     v
  +------------+  ← Stack starts here
  |   main()   |
  +------------+
  |   foo()    |
  +------------+
  |   bar()    |  ← Stack grows down
  +------------+
  Low Address (e.g., 0x0000)    */

/* +------------------+
| Code & Globals   |
+------------------+
|      Heap ↑      |
|                  |
|      Free RAM     |
|                  |
|      Stack ↓      |
+------------------+ */ 
  
#include <stdio.h>

int main()
{
    int x = 1; //store 0x00000001 in a 32-bit address system- 4 bytes in memory 
    
    char *p = (char*) &x;//typecasting address of x to char since char is only 1 bytes and 
    //*p - now points to only the first byte of the 4-byte integer
  
    /* Memory (from lowest to highest address):
  [0x01] [0x00] [0x00] [0x00]
     ↑
    *p points here*/ 

    if(*p == 1) //asking if the first byte in the memory 0x01, if input was 0x12345678, if *p is 0x12 big endian
    {
        printf("Big Endian");
    }
    else {
        printf("Little Endian");
    }
    return 0;
}
