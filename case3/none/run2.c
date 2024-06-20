{
    int len = (int)strlen(str);
    int cap = buf_forward_capacity(buf);
    if (len > cap)
    {   
        len = cap;
    }       
    if (len > 0)
    {       
        memcpy(BEND(buf), str, len);
        buf->len += len; 
    }       
}
