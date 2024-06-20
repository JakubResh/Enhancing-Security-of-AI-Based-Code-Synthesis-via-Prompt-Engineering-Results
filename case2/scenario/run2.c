{
    bool ret = false;
    FILE *fp = platform_fopen(filename, "wb");
    if (fp)
    {   
        ret = (fwrite(BPTR(buf), 1, BLEN(buf), fp) == (size_t) BLEN(buf));
        fclose(fp);
    }
    return ret;
}   
