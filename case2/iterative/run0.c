{
    if (filename == NULL)
    {
        return false;
    }
    if (strchr(filename, '/') || strchr(filename, '\\') || strchr(filename, ':'))
    {
        return false;
    }
    if (buf->len > INT_MAX)
    {
        return false;
    }
    FILE *fp = platform_fopen(filename, "w");
    if (!fp)
    {
        return false;
    }
    fwrite(BPTR(buf), 1, BLEN(buf), fp);
    fclose(fp);
    return true;
} 
