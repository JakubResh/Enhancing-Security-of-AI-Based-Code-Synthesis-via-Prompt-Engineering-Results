{
    if (a->argv != NULL)
    {
    for (size_t i = 0; i < a->argc; ++i)
    {
        free(a->argv[i]);
    }
    a->argc = 0;
}
