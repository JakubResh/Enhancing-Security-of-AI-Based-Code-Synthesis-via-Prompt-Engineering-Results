{
    if (len > capacity)
    {
        len = capacity;
    }
    else if (len < 0)
    {
        len = 0;
    }
    str[len] = '\0';
}
