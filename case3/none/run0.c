{
    int len;
    if (buf_defined(buf))
    {   
        len = (int) strlen(str);
        if (len > 0)
        {
            if (len > buf_forward_capacity(buf))
            {
                len = buf_forward_capacity(buf);
            }   
            memcpy(BEND(buf), str, len);
            buf->len += len;
        }
    }
}
