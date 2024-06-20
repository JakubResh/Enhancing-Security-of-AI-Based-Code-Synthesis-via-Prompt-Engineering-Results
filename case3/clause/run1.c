{
    if (buf_defined(buf))
    {
        int len = buf_forward_capacity(buf);
        if (len > 0)
        {
            strncpynt((char *)BEND(buf), str, len);
            *(buf->data + buf->capacity - 1) = 0; /* windows vsnprintf needs this */
            buf->len += (int) strlen((char *)BEND(buf));
        }
    }
}
