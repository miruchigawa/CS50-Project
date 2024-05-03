#include <cs50.h>
#include <stdio.h>

void meow(int counter) {
    for (int i = 0; i < counter; i++)
        printf("Meow\n");
}

int main(void) {
    int i = 10;

    while (i > 0) {
        printf("Meow\n");
        i--;
    }

    for (int i = 10; i > 0; i--) {
        printf("Woof\n");
    }

    meow(3);

    return 0;
}
