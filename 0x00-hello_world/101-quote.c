#include <unistd.h>
/**
 * main - Entry point
 * Description: 'printing to standard error'
 * Return: Always 0 (Success)
 */

int main() {
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, msg, sizeof(msg) - 1);
    return 1;
}
