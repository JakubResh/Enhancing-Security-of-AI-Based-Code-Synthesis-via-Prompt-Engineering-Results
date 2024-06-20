{
    FILE *fp = platform_fopen(filename, "wb");
    if (fp)
    {
        size_t written = fwrite(BPTR(buf), 1, (size_t)BLEN(buf), fp);
        fclose(fp);
        return written == (size_t)BLEN(buf);
    }   
    return false;
}
