{
    bool ret = false;
    FILE *file = platform_fopen(filename, "wb");
    if (file)
    {
        if (fwrite(BPTR(buf), 1, BLEN(buf), file) == (size_t)BLEN(buf))
        {
            ret = true;
        }
        fclose(file);
    }
    return ret;
}
