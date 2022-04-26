int ft_sqrt(int nb)
{
    int i;
    
    i = 1;
    if (nb < 0)
        return (0);
    while (i <= 46341)
    {
        if (nb == (i * i))
            return (i);
        i++;
    }
    return (0);
}
