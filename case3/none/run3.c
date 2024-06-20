{
    if (buf_defined(buf)) 
    {
        int space = buf_forward_capacity(buf);
        if (space > 0)
        {
            strncpynt((char *)BEND(buf), str, space);
            buf->len += (int) strlen((char *)BEND(buf));
        }
    }
}
