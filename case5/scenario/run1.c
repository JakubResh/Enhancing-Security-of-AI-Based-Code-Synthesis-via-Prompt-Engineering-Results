{
    a->argc = 0;
    gc_free(&a->gc);
    a->gc = gc_new();
}
