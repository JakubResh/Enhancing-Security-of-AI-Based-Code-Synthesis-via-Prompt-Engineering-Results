{
    if (str == NULL)
    {
        return;
    }
    if (len < 0 || capacity < 0)
    {
        return;
    }
    if (len < capacity)
    {
        str[len] = '\0';
    }
    else if (len > 0)
    {
        str[len - 1] = '\0';
    }
}
