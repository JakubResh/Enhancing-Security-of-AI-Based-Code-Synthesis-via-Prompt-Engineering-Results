{
    if (strchr(str, '\n') || strchr(str, '\r'))
    {   
        msg(M_WARN, "buf_catrunc: string contains newline: '%s'", str);
        return;
    }
    if (buf_defined(buf))
    {
        int len = (int)strlen(str);
        if (len > buf_forward_capacity(buf))
        {   
            len = buf_forward_capacity(buf);
        }
        memcpy(BEND(buf), str, len);
        buf->len += len;
    }   
}
