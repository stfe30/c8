// TEST-File: Buffer-Overflow (bei Eingabe einer zu langen Benutzernamens)

#include <stdio.h>

int main()
{
    char username[20];
    
    printf("Bitte Benutzernamen eingeben: ");
    scanf("%s", username);
    printf("Eingegebener Benutzername: %s\n", username);
    
    return 0;
}
