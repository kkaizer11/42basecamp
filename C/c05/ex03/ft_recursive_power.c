int ft_recursive_power(int nb, int power)
{
    
    int res;

    res = 1;
    if (power == 0)
        return (1);
    else if(power < 0)
        return (0);
    else
    {
        return(nb * ft_recursive_power(nb,  power - 1));
    }
    return (res);
}
