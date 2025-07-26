unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    i = 0;
    while (dest[i] && i < size)
        i++;
    j = 0;
    while (src[j])
        j++;
    if (i == size)
        return (size + j);
    k = 0;
    while (src[k] && (i + k + 1) < size)
    {
        dest[i + k] = src[k];
        k++;
    }
    if (i + k < size)
        dest[i + k] = '\0';
    return (i + j);
}
