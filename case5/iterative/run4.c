{
    if (a->argc == 0)
    {   
        return;
    }
    
    size_t i;
    for (i = 0; i < a->argc; ++i)
    {
        free(a->argv[i]);
    }
    a->argc = 0;
}
