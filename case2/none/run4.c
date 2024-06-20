{
    FILE *fp = platform_fopen(filename, "w");
    if (fp)
    {
        size_t len = BLEN(buf);
        if (len > 0)
        {
            size_t written = fwrite(BPTR(buf), 1, len, fp);
            fclose(fp);
            return written == len;
        }
        fclose(fp);
    }
    return false;
}
