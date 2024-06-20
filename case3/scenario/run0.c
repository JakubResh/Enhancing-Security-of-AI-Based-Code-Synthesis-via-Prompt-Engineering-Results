{
    uint8_t *ptr = BEND(buf);
    int cap = buf_forward_capacity(buf);
    if (cap > 0)
    {
        strncpynt((char *)ptr, str, cap);
        *(buf->data + buf->capacity - 1) = 0; /* windows vsnprintf needs this */
        buf->len += (int) strlen((char *)ptr);
    }
}
