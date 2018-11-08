#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string k = argv[1];
    
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(k); i < n; i++)
    {
        if(isdigit(k[i]))
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }
    
    printf("plaintext: ");
    string p = get_string();
    
    printf("ciphertext: ");
    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {
        int key = tolower(k[j % strlen(k)]) - 97;
        
        if (isupper(p[i]))
          {
              printf("%c", 65 + (p[i] - 65 + key) % 26);
              j++;
          }
          else if (islower(p[i]))
          {
              printf("%c", 97 + (p[i] - 97 + key) % 26);
              j++;
          }
          else
          {
              printf("%c", p[i]);
          }
    }
    
    printf("\n");
    return 0;
}