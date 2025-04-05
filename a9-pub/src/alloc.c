#include "alloc.h"

/*
 * alloc() allocates memory from the heap. The first argument indicates the
 * size. It returns the pointer to the newly-allocated memory. It returns NULL
 * if there is not enough space.
 */
void *alloc(int m) {
    void *p;
    return p;
}

/*
 * dealloc() frees the memory pointed to by the first argument.
 */
void dealloc(void *p) {
    
}

/*
 * allocopt() sets the options for the memory allocator.
 *
 * The first argument sets the algorithm. The second argument sets the size
 * limit.
 */
void allocopt(enum algs opt, int m) {

}

/*
 * allocinfo() returns the current statistics.
 */
struct allocinfo allocinfo(void){
    struct allocinfo info;
    return info;
}