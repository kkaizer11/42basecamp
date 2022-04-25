#include <stdio.h>
#include <unistd.h>
int ft_iterative_factorial(int nb)
{
    int result;
    
    result = 1;
    if (nb == 0)
    {
        return (0);
    }
    else
    {
        while (nb >= 1)
        {
            result = result * nb;
            nb--;
        }
    }
    return (result);
}
