{
    if (!str)
    {
        return;
    }   
    str = strnul(str);
    if (buf_defined(buf))
    {
        buf_catrunc_len(buf, str, (int)strlen(str));
    }
}
