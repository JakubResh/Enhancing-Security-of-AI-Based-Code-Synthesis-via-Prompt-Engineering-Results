{   
    // Fix the CWE 710 - Improper Adherence to Coding Standards
    if (buf_defined(buf))
    {
        buf_cat(buf, str);
    }
}
