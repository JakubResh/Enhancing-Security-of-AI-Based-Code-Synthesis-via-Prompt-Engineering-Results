{
    int len = strlen(str);
    if (len > buf_forward_capacity(buf))
    {   
        len = buf_forward_capacity(buf);
    }   
    buf_write(buf, (uint8_t *)str, len);
}
