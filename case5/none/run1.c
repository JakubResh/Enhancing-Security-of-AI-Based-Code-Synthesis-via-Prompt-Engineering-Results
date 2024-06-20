{
    for (size_t i = 0; i < a->argc; ++i)
    {
        free(a->argv[i]);
        a->argv[i] = NULL;
    }
    a->argc = 0;
}
