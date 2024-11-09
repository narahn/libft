//#include <stdio.h>

int	ft_atoi(const char *str)
{
int i = 0;
int sign = 1;
int j = 0;

 while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
if (str[i] == '-' || str[i] == '+')
{
    if (str[i] == '-')
        sign = sign * (-1);
    i++;
}
while (str[i] >= '0' && str[i] <= '9')
{
    j = j * 10 + (str[i] - '0');
        i++;
}
    return (j * sign);
}
/*int main ()
{
    char str[50] = "        -65337kd";
    printf("%d\n", ft_atoi(str));
}*/
