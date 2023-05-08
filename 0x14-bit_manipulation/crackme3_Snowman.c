
int64_t __gmon_start__ = 0;

void fun_4004f0();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_4004f0();
    }
    return;
}

void fun_4004f0() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x4004d6;

void fun_4004d0(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t fun_4004c0(int64_t rdi);

int32_t check_password(int64_t rdi) {
    int64_t v2;
    int64_t rax3;
    unsigned char v4;
    int64_t rdx5;
    uint32_t eax6;
    uint32_t ecx7;
    uint32_t eax8;
    int32_t eax9;

    v2 = rdi;
    rax3 = fun_4004c0(v2);
    if (rax3 == 4) {
        v4 = 0;
        while (v4 <= 3) {
            *reinterpret_cast<uint32_t*>(&rdx5) = v4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            eax6 = *reinterpret_cast<unsigned char*>(v2 + rdx5);
            ecx7 = static_cast<uint32_t>(v4) << 3;
            if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax6)) != (0xff & 0x46c6f48 >> *reinterpret_cast<signed char*>(&ecx7)))
                goto addr_400657_5;
            eax8 = v4 + 1;
            v4 = *reinterpret_cast<unsigned char*>(&eax8);
        }
    } else {
        eax9 = 0;
        goto addr_400673_8;
    }
    eax9 = 1;
    addr_400673_8:
    return eax9;
    addr_400657_5:
    eax9 = 0;
    goto addr_400673_8;
}

int64_t fprintf = 0x4004e6;

void fun_4004e0(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto fprintf;
}

int64_t puts = 0x4004b6;

void fun_4004b0(int64_t rdi) {
    goto puts;
}

int64_t strlen = 0x4004c6;

int64_t fun_4004c0(int64_t rdi) {
    goto strlen;
}

struct s0 {
    int64_t f0;
    int64_t f8;
};

int64_t main(int32_t edi, struct s0* rsi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_4004d0(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_4005a5() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void __gmon_start__();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        __gmon_start__();
    }
    if (1)
        goto 0x4005a8;
    if (1)
        goto 0x4005a8;
    goto 0;
}

void __libc_csu_fini() {
    return;
}

int64_t g601010 = 0;

void fun_4004d6() {
    goto g601010;
}

/* completed.7585 */
signed char completed_7585 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_7585 == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        completed_7585 = 1;
    }
    return rax2;
}

int64_t stderr = 0;

int64_t main(int32_t edi, struct s0* rsi) {
    int64_t rdi3;
    int32_t eax4;
    int64_t rax5;
    int64_t rdx6;
    int64_t rax7;

    if (edi == 2) {
        rdi3 = rsi->f8;
        eax4 = check_password(rdi3);
        if (eax4 != 1) {
            fun_4004b0("ko");
            *reinterpret_cast<int32_t*>(&rax5) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        } else {
            fun_4004b0("Congratulations!");
            *reinterpret_cast<int32_t*>(&rax5) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        }
    } else {
        rdx6 = rsi->f0;
        rax7 = stderr;
        fun_4004e0(rax7, "Usage: %s password\n", rdx6);
        *reinterpret_cast<int32_t*>(&rax5) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    }
    return rax5;
}

void fun_4004e6() {
    goto 0x4004a0;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600e10 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_4004b6() {
    goto 0x4004a0;
}

void fun_4004c6() {
    goto 0x4004a0;
}
