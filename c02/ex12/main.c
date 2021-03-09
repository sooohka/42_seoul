#include <stdio.h>
#include <unistd.h>

void * ft_print_memory(void *addr, unsigned int size);

int main()
{
	char	*a = "123";
	char     str[] = {
        '\x42', '\x6f', '\x6e', '\x6a', '\x6f', '\x75', '\x72', '\x20', '\x6c',
        '\x65', '\x73', '\x20', '\x61', '\x6d', '\x69', '\x6e', '\x63', '\x68',
        '\x65', '\x73', '\x09', '\x0a', '\x09', '\x63', '\x20', '\x20', '\x65',
        '\x73', '\x74', '\x20', '\x66', '\x6f', '\x75', '\x09', '\x74', '\x6f',
        '\x75', '\x74', '\x09', '\x63', '\x65', '\x20', '\x71', '\x75', '\x20',
        '\x6f', '\x6e', '\x20', '\x70', '\x65', '\x75', '\x74', '\x20', '\x66',
        '\x61', '\x69', '\x72', '\x65', '\x20', '\x61', '\x76', '\x65', '\x63',
        '\x09', '\x0a', '\x09', '\x70', '\x72', '\x69', '\x6e', '\x74', '\x5f',
        '\x6d', '\x65', '\x6d', '\x6f', '\x72', '\x79', '\x0a', '\x0a', '\x0a',
        '\x09', '\x6c', '\x6f', '\x6c', '\x2e', '\x6c', '\x6f', '\x6c', '\x0a',
        '\x20', '\x00'};
	ft_print_memory(str, sizeof(str));
	ft_print_memory(a, 3);
	ft_print_memory(a,0);
	return (0);
}