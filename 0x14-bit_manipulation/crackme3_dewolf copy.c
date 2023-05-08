extern unsigned long * stderr = NULL;

long sub_4004a0() {}

long sub_4004b6() {
    return sub_4004a0();
}

long sub_4004c6() {
    return sub_4004a0();
}

long sub_4004d6() {
    return sub_4004a0();
}

long sub_4004e6() {
    return sub_4004a0();
}

long check_password(char * arg1) {
    long var_1;
    char var_0;
    if (strlen(arg1) == 4L) {
        var_0 = 0;
        while (true) {
            if (var_0 > 3) {
                var_1 = 1L;
                break;
            }
            if ((unsigned char)arg1[var_0] != (unsigned int)(0x46c6f48 >> ((unsigned char)var_0 << 3 & 0xff) & 0xff)) {
                var_1 = 0L;
                break;
            }
            var_0++;
        }
    }
    else {
        var_1 = 0L;
    }
    return var_1;
}

int main(int argc, char ** argv, char ** envp) {
    unsigned long * var_1;
    if (argc != 2) {
        var_1 = stderr;
        fprintf(/* stream */ var_1, /* format */ "Usage: %s password\n", *argv);
        argc = 1;
    }
    else {
        argc = check_password(*(argv + 8L));
        if (argc != 1) {
            puts(/* str */ "ko");
            argc = 1;
        }
        else {
            puts(/* str */ "Congratulations!");
            argc = 0;
        }
    }
    return argc;
}
