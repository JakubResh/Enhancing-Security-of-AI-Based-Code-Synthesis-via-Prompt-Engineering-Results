{   
    if (a->gc.buf != NULL)
    {
        gc_free(&a->gc);
        a->gc = gc_new();
    }
    a->argc = 0;
    a->capacity = 0;
    a->argv = NULL;
    argv_extend(a, 8);
}
