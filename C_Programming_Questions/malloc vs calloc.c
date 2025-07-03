#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int *arr_malloc;
    int *arr_calloc; 
    
    arr_malloc = (int*)malloc(5 * sizeof(int)); 
    //user requesting dynamic memory allocation for array of 5 integers
    //int = 4 bytes, so we request 5 * 4 = 20 bytes of RAM memory
    //arr_malloc points to the first int in that memory
    //but since content of that memory is not initialized, we will find garbage data there

    arr_calloc = (int*)calloc(5, sizeof(int)); 
    //same function as malloc BUT it clears the memory before handing it to the user 
    
    // assigning values to allocated integers
    arr_malloc[0] = 10;
    arr_malloc[1] = 11;
    arr_calloc[0] = 42; 
    
    //printing the values
    printf("Value stored in the malloc-allocated integer (first element): %d\n", arr_malloc[0]);
    printf("Value stored in the calloc-allocated integer (first element): %d\n", arr_calloc[0]);

    // deallocating memory
    free(arr_malloc);
    free(arr_calloc);

    return 0;
}
