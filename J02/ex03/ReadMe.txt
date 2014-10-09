1) Creation du fichier "ft_is_negative.c"
touch ft_is_negative.c


2) Creation du fichier "ft_putchar.c" (touch ft_putchar.c)
#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}


3) Creation du fichier "main.c" (touch main.c)
void ft_is_negative(int n);

int main(int argc, char **argv)
{
        int n;

        if(argc == 2)
        {
                n = atoi(argv[1]);
                ft_is_negative(n);
        }
        return (0);
}


4) Compilation
gcc -o test ft_is_negative.c main.c ft_putchar.c


5) Pour tester
./test
