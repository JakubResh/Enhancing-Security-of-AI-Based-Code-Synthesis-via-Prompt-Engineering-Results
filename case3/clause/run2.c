{
    if (buf_defined(buf))
    {
        uint8_t *ptr = BEND(buf);
        int cap = buf_forward_capacity(buf);
        if (cap > 0)
        {
            strncpynt((char *)ptr, str, cap);
            buf->len += (int) strlen((char *)ptr);
        }
    }
}
