#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes) {
if (num_bytes <= 0) {
printf("Error\n");
exit(2);
}

unsigned char *main_addr = (unsigned char *)print_opcodes;
int i;

for (i = 0; i < num_bytes; i++) {
printf("%02x ", main_addr[i]);
}
printf("\n");
}

int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);
print_opcodes(num_bytes);

return (0);
}
