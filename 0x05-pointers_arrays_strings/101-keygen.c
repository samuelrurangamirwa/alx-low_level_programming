#include <stdio.h>
#include <string.h>

int check_password(const char *password)
{
// Replace this with your actual password validation logic
const char *correct_password = "Secret123";
return strcmp(password, correct_password) == 0;
}

int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Usage: %s <password>\n", argv[0]);
return 1;
}

if (check_password(argv[1]))
{
printf("Tada! Congrats\n");
}
else
{
printf("Access denied\n");
}

return (0);
}
