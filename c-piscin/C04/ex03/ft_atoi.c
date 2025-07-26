int ft_atoi(char *str)
{
    int i = 0;
    int signe = 1;
    int result = 0;

    // تخطي المسافات البيضاء
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // الإشارات
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe *= -1;
        i++;
    }

    // بناء الرقم مباشرة
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * signe;
}

