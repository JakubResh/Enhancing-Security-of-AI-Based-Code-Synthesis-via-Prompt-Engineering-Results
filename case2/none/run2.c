{
    FILE *fp = platform_fopen(filename, "w");
    if (!fp)
    {
        return false;
    }   
    fwrite(BPTR(buf), 1, BLEN(buf), fp);
    fclose(fp);
    return true;
}
