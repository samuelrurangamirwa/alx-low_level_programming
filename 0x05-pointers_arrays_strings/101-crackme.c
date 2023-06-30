#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char *generate_password()
{
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = rand() % 94 + 33; // ASCII characters between 33 and 126
}

password[PASSWORD_LENGTH] = '\0';

return password;
}

int main(void)
{
char *password = generate_password();

printf("%s", password);

free(password);

return (0);
}
