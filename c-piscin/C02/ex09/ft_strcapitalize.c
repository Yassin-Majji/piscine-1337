char token_type_analysis(char token)
{
    if (token >= 'a' && token <= 'z')
        return ('l');
    else if (token >= 'A' && token <= 'Z')
        return ('u');
    else if (token >= '0' && token <= '9')
        return ('n');
    else
        return ('t');
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 || token_type_analysis(str[i - 1]) == 't')
        {
            if (token_type_analysis(str[i]) == 'l')
                str[i] = str[i] - 32;
        }
        else
        {
            if (token_type_analysis(str[i]) == 'u')
                str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

