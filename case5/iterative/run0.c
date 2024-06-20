{   
    if (a == NULL)
    {
        return;
    }
    for (size_t i = 0; i < a->argc; ++i)
    {
        char *tmp = a->argv[i];
        while (*tmp != '\0')
        {
            if (*tmp == '\r' || *tmp == '\n')
            {
                *tmp = ' ';
            }
            tmp++;
        }
    }

    if (a->argc > 0)
    {
        memset(a->argv, 0, a->argc * sizeof(char *));
    }
    if (a->argc > a->capacity)
    {
        a->capacity = a->argc;
    }   
    for (size_t i = 0; i < a->argc; ++i)
    {
        free(a->argv[i]);
    }       
    a->argc = 0;
} 
