int _init()
{
    return;
    if (false)
    {
        __gmon_start__();
        return;
    }
}

long long sub_4004a0()
{
    void* v0;  // [bp-0x8]

    v0 = 0;
    goto *((long long *)6295568);
}

extern unsigned long long __libc_csu_fini;
extern unsigned long long __libc_csu_init;
extern unsigned long long main;

long long _start()
{
    unsigned long long v0;  // [bp+0x0], Other Possible Types: unsigned long
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rsi
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx

    v2 = v0;
    v0 = v3;
    __libc_start_main(&main, v2, &v1, &__libc_csu_init, &__libc_csu_fini, v4); /* do not return */
}

// No decompilation output for function sub_400529

int deregister_tm_clones(unsigned long a0)
{
    return;
    if (false)
    {
        return;
    }
}

long long register_tm_clones(unsigned long a0)
{
    return 0;
    if (false)
    {
        return 0;
    }
}

extern char completed.7585;

long long __do_global_dtors_aux(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (completed.7585 == 0)
    {
        v0 = stack_base + 0;
        completed.7585 = 1;
        return deregister_tm_clones(a0);
    }
    return v2;
}

extern unsigned long long __JCR_END__;

long long frame_dummy()
{
    unsigned long v0;  // [bp-0x8]

    if (__JCR_END__ == 0)
    {
        register_tm_clones(&__JCR_END__);
        return register_tm_clones(&__JCR_END__);
    }
    if (false)
    {
        v0 = stack_base + 0;
        0();
        return register_tm_clones(&__JCR_END__);
    }
    register_tm_clones(&__JCR_END__);
    return register_tm_clones(&__JCR_END__);
}

int check_password(char *a0)
{
    char v0;  // [bp-0xe]
    char v1;  // [bp-0xd]
    unsigned int v2;  // [bp-0xc]

    if (strlen(a0) != 4)
    {
        return 0;
    }
    v2 = 74215240;
    v1 = 255;
    v0 = 0;
    while (true)
    {
        if (v0 <= 3)
        {
            if (a0[v0] != (v1 & (unsigned int)(v2 >> ((char)(v0 << 3) & 31))))
            {
                return 0;
            }
            v0 += 1;
        }
        else
        {
            return 1;
        }
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned long long stderr;

int main(unsigned int a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 != 2)
    {
        fprintf(stderr, "Usage: %s password\n", (unsigned int)a1->padding_0);
        return 1;
    }
    v0 = check_password(a1->field_8);
    if (v0 == 1)
    {
        puts("Congratulations!");
        return 0;
    }
    puts("ko");
    return 1;
}

long long __libc_csu_init(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rdi
    void* v6;  // rbx
    unsigned long long v7;  // rax

    if (false)
    {
        return _init();
    }
    v6 = 0;
    while (true)
    {
        v7 = *((long long *)(6295056 + rbx<8> * 8))(v1, a1, a2);
        v6 += 1;
        if (v6 == 1)
        {
            break;
        }
    }
    return v7;
}

long long __libc_csu_fini()
{
    unsigned long v1;  // rax

    return v1;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}

