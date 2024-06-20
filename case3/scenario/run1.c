{
    char *ptr = (char *) BEND(buf);
    int cap = buf_forward_capacity(buf);
    if (cap > 0)
    {   
        strncpynt(ptr, str, cap);
        buf->len += (int) strlen(ptr);
    }       
}
