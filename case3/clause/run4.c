{
    if (buf && str)
    {
        const size_t len = strlen(str);
        if (len >= (size_t) buf_forward_capacity(buf))
        {
            buf->len += (int) buf_forward_capacity(buf);
        }   
        else
        {       
            buf->len += (int) len;
        }       
    }       
}
