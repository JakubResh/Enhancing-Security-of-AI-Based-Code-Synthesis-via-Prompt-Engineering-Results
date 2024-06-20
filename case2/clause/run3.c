{
    FILE *fp = platform_fopen(filename, "w");
    if (!fp)
    {
        return false;
    }   
    if (fwrite(BPTR(buf), 1, BLEN(buf), fp) != (size_t)BLEN(buf))
    {
        fclose(fp);
        return false;
    }
    fclose(fp);
    return true;
}
