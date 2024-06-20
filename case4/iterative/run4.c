{   
    if (size < 0 || !buf_valid(buf) || buf->offset < size)
    {
        return NULL;
    }
    buf->offset -= size;
    buf->len += size;
    return BPTR(buf);
}
