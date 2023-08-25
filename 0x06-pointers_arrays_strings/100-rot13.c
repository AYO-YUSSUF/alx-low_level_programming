#include "main.h"

/**
 * rot13 - encodes string with rot13 
 * @s: string input
 * Return: encoded string
*/

char *rot13(char *s)
{
    int i;
    
    char *ptr = s;
    char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
   
    while (*s)
    {
        for (i = 0; i <= 52; i++;)
        {
            if (*s == rot13[i])
            {
                *s = ROT13[i];
                break;
                
            }
            
        }
        s++;
        
    }
    
    return (ptr);
}

