{
    if (str == NULL || len < 0 || capacity < 0 || len > capacity)
    {
        return;
    }
    if (len < capacity)
    {
        str[len] = '\0';
    }
    else if (len > 0)
    {
        str[capacity - 1] = '\0';
    }
}
