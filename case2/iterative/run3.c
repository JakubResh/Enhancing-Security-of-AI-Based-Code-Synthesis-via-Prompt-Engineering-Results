{
    if (filename == NULL)
    {
        return false;
    }
    if (filename[0] == '/')
    {
        // The filename is an absolute path
        return false;
    }
    FILE *fp = platform_fopen(filename, "wb");
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
