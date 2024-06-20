{   
    // Fix the CWE 710 - Improper Adherence to Coding Standards
    if (size < 0 || !buf_safe_bidir(buf, size))
    {
        return NULL;
    }
    buf->offset -= size;
    buf->len += size;
    return BPTR(buf);
}
