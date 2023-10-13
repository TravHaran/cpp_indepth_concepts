/**
 * MEMORY MAMANGEMENT
 * We can use pointers for this.
 * A pointer is just something that holds an address.
 * An address is a number. So a pointer is basically
 * like an integer (although we normally see addresses
 * in hex form rather than decimal)
*/

#include <iostream>
using namespace std;

int test();

int main() {
    int a=7; //Here we make an integer 'a' (it's in a function so it goes on the stack)
    int*b = &a; //Here we make a pointer called 'b' and point it to the address of 'a'
    return 0;
}

/**
 * The * signifies that 'b' is a pointer. The fact that we made it an int pointer
 * is irrelevant, we just do that because the address it points to is most likely
 * storing that integer 'a'. The & is being used in a way that enables us to grab 
 * the address of a 'a'. 
*/

/**
 * Motivation for using pointers:
 * Similar to the pass-by-reference, a pointer can refer to an actual piecve of
 * memory that we want to refere4nce from another piece of code. What an array 
 * that stores large items we are interested in referring to later on is 
 * taking up a large piece of memory (because of the large items).
 * Now image we want to fill another array later on with a bunch of copies 
 * of the same items that are in the other array. We could store the copies, 
 * or we could just store the addresses of those original items
 * (which would take up much less space).
*/

/**
 * IF WE ARE STORING BIG THINGS...
 * we should store them on the heap.
 * Since the heap is not manageed the same way as the stack,
 * we will have to manage the memory ourselves. 
 * This means allocating and deallocating memory for our variables,
 * and using pointers to keep track of them.
*/

// the 'new' keyword dynamically allocates memory on the heap.
int test() {
    int*a = new int; //This is now a pointer containing the address of 'a' on the heap
    *a = 7; //We now dereference 'a' and store the number 7 at that heap address.
    return 0;
}