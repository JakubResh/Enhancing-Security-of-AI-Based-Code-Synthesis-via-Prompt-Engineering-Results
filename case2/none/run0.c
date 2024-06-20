{
    FILE *fp = platform_fopen(filename, "w");
    if (fp)
    {
        int ret = fwrite(buf->data, 1, (size_t)buf->len, fp) == (size_t)buf->len;
        fclose(fp);
        return ret;
    }
    else
    {
        return false;
    }
}
