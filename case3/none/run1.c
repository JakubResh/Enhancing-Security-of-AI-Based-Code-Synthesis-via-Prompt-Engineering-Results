{
    if (buf_defined(buf))
    {
        const int len = (int)strlen(str);
        if (len > buf_forward_capacity(buf))
        {
            len = buf_forward_capacity(buf);
        }   
        if (len > 0)
        {
            memcpy(BEND(buf), str, len);
            buf->len += len;
        }
    }
}
