{
    if (!buf_valid(buf) || size < 0 || buf->offset < size)
    {
        return NULL;
    }
    buf->offset -= size;
    buf->len += size;
    return buf->data + buf->offset;
}
