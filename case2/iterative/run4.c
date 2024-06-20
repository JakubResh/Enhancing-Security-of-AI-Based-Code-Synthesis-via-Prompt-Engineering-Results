{
    if (strchr(filename, '\n') || strchr(filename, '\r'))
    {
        return false;
    }
    if (filename == NULL || *filename == '\0')
    {
        return false;
    }
    FILE *fp = platform_fopen(filename, "w");
    if (!fp)
    {
        return false;
    }
    const int bytes_written = fwrite(BPTR(buf), 1, BLEN(buf), fp);
    fclose(fp);
    return (bytes_written == BLEN(buf));
}
