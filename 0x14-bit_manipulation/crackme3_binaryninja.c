void _init()
{
    if (__gmon_start__ != 0)
    {
        __gmon_start__();
    }
}

int64_t sub_4004a0()
{
    int64_t var_8 = data_601008;
    /* jump -> data_601010 */
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_4004b6()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_4004a0();
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int64_t sub_4004c6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_4004a0();
}

void __libc_start_main(
    int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc,
    char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(),
    void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int64_t sub_4004d6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_4004a0();
}

int32_t fprintf(FILE* stream, char const* format, ...)
{
    /* tailcall */
    return fprintf();
}

int64_t sub_4004e6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_4004a0();
}

int64_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, __libc_csu_init, __libc_csu_fini, arg3, &var_8);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux()
{
    if (completed.7585 == 0)
    {
        deregister_tm_clones();
        completed.7585 = 1;
    }
}

int64_t frame_dummy()
{
    /* tailcall */
    return register_tm_clones(0x600e20);
}

int64_t check_password(char* arg1)
{
    int64_t rax_2;
    if (strlen(arg1) != 4)
    {
        rax_2 = 0;
    }
    else
    {
        int32_t var_c_1 = 0x46c6f48;
        char var_d_1 = 0xff;
        char var_e_1 = 0;
        while (true)
        {
            if (var_e_1 > 3)
            {
                rax_2 = 1;
                break;
            }
            if (arg1[var_e_1] != (0x46c6f48 >> (var_e_1 << 3)))
            {
                rax_2 = 0;
                break;
            }
            var_e_1 = (var_e_1 + 1);
        }
    }
    return rax_2;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t rax_2;
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s password\n", *argv);
        rax_2 = 1;
    }
    else if (check_password(argv[1]) != 1)
    {
        puts(&data_400799);
        rax_2 = 1;
    }
    else
    {
        puts("Congratulations!");
        rax_2 = 0;
    }
    return rax_2;
}

void __libc_csu_init()
{
    _init();
    int64_t rbx_1 = 0;
    do
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        &__init_array_start[rbx_1](rdi, rsi, rdx);
        rbx_1 = (rbx_1 + 1);
    } while (rbx_1 != 1);
}

void __libc_csu_fini()
{
    return;
}

int64_t _fini()
{
    return;
}

