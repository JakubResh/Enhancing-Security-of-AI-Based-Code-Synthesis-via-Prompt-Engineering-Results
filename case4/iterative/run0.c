{   
    if (unlikely(size < 0))
    {
        return NULL;
    }
    if (!buf_valid(buf) || buf->offset < size)
    {   
        return NULL;
    }
    buf->offset -= size;
    buf->len += size;
    return BPTR(buf); 
}
