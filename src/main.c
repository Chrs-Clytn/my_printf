#include "main.h"
#include "my_printf.h"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        my_printf("It Works! %s\n", av[1]);
        my_printf("Hello world!\n");
        my_printf("%c!\n", 'H');
        my_printf("%c-%c-%c-%c-%c!\n", 'H', 'e', 'l', 'l', 'o');
        my_printf("Testing %s!\n", "Single_string");
        my_printf("Testing %s%s!\n", "Double", "String");
        my_printf("Should print NULL -  %s!\n", (char *)NULL);
        my_printf("testing d - %d!\n", 1337);
        my_printf("testing multiple ds - %d - %d - %d!\n", 2048, 0, -1337);
        my_printf("testing o - %o!\n", 100);
        my_printf("testing x - %x!\n", 10);
        int var = 1;
        my_printf("%p\n", &var);
    }
    else
    {
        printf("something went wrong");
        return 1;
    }
    return 0;
}