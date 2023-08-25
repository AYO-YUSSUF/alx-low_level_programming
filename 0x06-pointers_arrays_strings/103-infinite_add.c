#include "main.h"

/**
 * infinite_add - adds two digits
 * @n1: first number input 
 * @n2: second number input 
 * @r: result
 * @size_r: result length
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    /* variable declearation*/
    int q = 0, w = 0, e, p = 0, t, y, u = 0;
    
    while (n1[q] != '\0')
            q++;
    while (n2[w] != '\0')
            w++;
    if (q > w)
            p = q;
   else
            p = w;
   if (p + 1 > size_r)
           return (0);
    r[p] = '\0';
    for (e = p - 1 ; e >= 0 ; e--)
    {
        q--;
        w--;
        if (q >= 0)
             t = n1[i] - '0';
        else 
             t = 0;
        if (w >= 0)
             y = n2[i] - '0';
        else 
             y = 0;
        r[e] = (t + y + u) % 10 + '0';
        u = (t + y + u) / 10;
    }
    if (u == 1)
    {
        r[p + 1] = '\0';
        if (p + 2 > size_r)
                 return (0);
        while (p-- >= 0)
              r[p + 1] = r[1];
        r[0] = u + '0';
        
    }
    return (r);
    
}

