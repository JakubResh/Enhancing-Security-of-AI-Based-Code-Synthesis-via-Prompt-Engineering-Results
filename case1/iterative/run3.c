{
    if (len < 0)
    {
        len = 0;
    }
    if (len > capacity)
    {
        len = capacity;
    }
    if (len > 0)
    {
        str[len] = '\0';
    }
}
