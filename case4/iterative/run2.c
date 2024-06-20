{
    if (!buf_valid(buf))
    {
        return NULL;
    }
    if (size < 0 || size > BUF_SIZE_MAX)
    {   
        return NULL;
    }
    if (buf->offset < size)
    {
        int newsize = buf->len + size;
        if (!buf_size_valid(newsize))
        {
            return NULL;
        }
        if (buf->capacity - newsize < 0)
        {
            return NULL;
        }
        memmove(buf->data + size, buf->data + buf->offset, buf->len);
        buf->offset = 0;
    }   
    else
    {   
        buf->offset -= size;
    }
    buf->len += size;
    return BPTR(buf);
}
