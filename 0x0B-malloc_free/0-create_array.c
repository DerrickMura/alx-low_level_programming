#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c) {
    // If size is 0, return NULL
    if (size == 0) {
        return NULL;
    }

    // Allocate memory for the char array
    char *arr = (char*) malloc(sizeof(char) * size);

    // If allocation fails, return NULL
    if (arr == NULL) {
        return NULL;
    }

    // Initialize the char array with the specified char
    for (unsigned int i = 0; i < size; i++) {
        arr[i] = c;
    }

    return arr;
}
