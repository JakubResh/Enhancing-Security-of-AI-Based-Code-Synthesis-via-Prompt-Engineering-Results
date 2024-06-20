{
    if (filename && !is_path_safe(filename))
    {
        msg(M_WARN, "buffer_write_file: refusing to write to unsafe filename '%s'", filename);
        return false;
    }       
    FILE *fp = platform_fopen(filename, "w");
    if (!fp)
    {
        return false;
    }
    fwrite(BPTR(buf), 1, BLEN(buf), fp);
    fclose(fp);
    return true;
}
