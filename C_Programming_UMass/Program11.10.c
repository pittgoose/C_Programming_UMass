// Returning a pointer from a function

#include <stdio.h>

struct entry1
{
    int value;
    struct entry1 *next;
};

struct entry1 *findEntry (struct entry1 *listPtr, int match)
{
    while (listPtr != (struct entry1 *) 0) {
        if (listPtr->value == match) {
            return (listPtr);
        }
        else {
            listPtr = listPtr->next;
        }
    }
    return (struct entry1 *) 0;
}

int main (void)
{
    struct entry1 *findEntry (struct entry1 *listPtr, int match);
    struct entry1 n1, n2, n3;
    struct entry1 *listPtr, *listStart = &n1;
    
    int search;
    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = 0;
    
    printf("Enter value to locate: ");
    scanf("%i", &search);
    
    listPtr = findEntry(listStart, search);
    
    if (listPtr != (struct entry1 *) 0) {
        printf("Found %i\n", listPtr->value);
    }
    else {
        printf("Not found.\n");
    }
    return 0;
}