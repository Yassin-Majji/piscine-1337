unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_len = 0;

    while (src[src_len])
        src_len++;

    if (size == 0)
        return src_len;

    i = 0;
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return src_len;
}

