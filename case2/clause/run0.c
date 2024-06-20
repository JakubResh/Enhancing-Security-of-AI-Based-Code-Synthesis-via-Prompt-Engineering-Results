{
    FILE *fp = platform_fopen(filename, "w");
    if (fp)
    {
        fwrite(BPTR(buf), 1, BLEN(buf), fp);
        fclose(fp);
        return true;
    }
    else
    {
        return false;
    }
}
