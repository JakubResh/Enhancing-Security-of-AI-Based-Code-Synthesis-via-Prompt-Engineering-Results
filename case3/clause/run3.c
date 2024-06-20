{
    int len = buf_forward_capacity(buf);
    if (len > 0)
    {   
        strncpynt((char *)BEND(buf), str, len);
        buf->len += (int) strlen((char *)BEND(buf));
    }   
}
