1) Creation du fichier "ft_print_alphabet.c"
touch ft_print_alphabet.c


2) Creation du fichier "ft_putchar.c" (touch ft_putchar.c)
#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}


3) Creation du fichier "main.c" (touch main.c)
void ft_print_alphabet(void);

int main(void)
{
        ft_print_alphabet();
	return (0);
}


4) Compilation
gcc -o test ft_print_alphabet.c main.c ft_putchar.c


5) Pour tester
./test
