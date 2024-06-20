{
    bool ret = false;
    FILE *fp = platform_fopen(filename, "w");
    if (fp)
    {   
        if (fwrite(BPTR(buf), 1, BLEN(buf), fp) == (size_t) BLEN(buf))
        {
            ret = true;
        }
        fclose(fp);
    }
    return ret;
}
