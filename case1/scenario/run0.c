{
    if (len > capacity)
    {
        len = capacity;
    }
    if (len > 0)
    {
        --len;
        if (str[len] != '\0')
        {
            str[len] = '\0';
        }
    }
}
