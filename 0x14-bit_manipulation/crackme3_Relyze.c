// VA=0x400480
void __cdecl _init( void )
{
    if( __gmon_start__ != 0 ) {
        __gmon_start___2();
    }
}

// VA=0x4004b0
int __cdecl puts_2( char * __s )
{
    goto puts_1;
}

// VA=0x4004b6
void __cdecl func_0x4B6( void )
{
    goto data_0x201010;
}

// VA=0x4004c0
unsigned long __cdecl strlen_2( char * __s )
{
    goto strlen_1;
}

// VA=0x4004c6
void __cdecl func_0x4C6( void )
{
    goto data_0x201010;
}

// VA=0x4004d0
void __cdecl __libc_start_main_2( int64_t p1, int64_t p2, int64_t p3, int64_t p4, int64_t p5, int64_t p6, int64_t p7, int64_t p8 )
{
    goto __libc_start_main;
}

// VA=0x4004d6
void __cdecl func_0x4D6( void )
{
    goto data_0x201010;
}

// VA=0x4004e0
int __cdecl fprintf_2( struct _IO_FILE * __stream, char * __format, ... )
{
    goto fprintf_1;
}

// VA=0x4004e6
void __cdecl func_0x4E6( void )
{
    goto data_0x201010;
}

// VA=0x4004f0
void __cdecl __gmon_start___2( void )
{
    goto __gmon_start__;
}

// VA=0x400500
noreturn void __cdecl _start( void )
{
    int64_t return_address; // [rsp+0]
     stack_0x8; // [rsp+8]
    int64_t rax; // rax
    int64_t rdx; // rdx

    __libc_start_main_2( &main, return_address, &stack_0x8, &__libc_csu_init, &__libc_csu_fini, rdx, (&stack_0x8 & 0xFFFFFFFFFFFFFFF0) - 8, rax );
    __asm.hlt();
    // Note: Program behavior is undefined if control flow reaches this location.
}

// VA=0x400530
void __cdecl deregister_tm_clones( void )
{
}

// VA=0x4005b0
void __cdecl __do_global_dtors_aux( void )
{
    if( completed.7585 == 0 ) {
        deregister_tm_clones();
        completed.7585 = 1;
    }
}

// VA=0x4005d0
void __cdecl frame_dummy( void )
{
}

// VA=0x4005f6
int32_t __cdecl check_password( int64_t p1 )
{
    uint8_t local_0xE; // [rsp-14]
    unsigned long v1; // rax
    int32_t v2; // rax

    v1 = strlen_2( p1 );
    if( v1 == 4 ) {
        local_0xE = 0;
        while( local_0xE <= 3 ) {
            if( (0xFF & 74215240 >> ((uint32_t)local_0xE * 8 & 0x1F)) != (uint32_t)*(p1 + (uint32_t)local_0xE) ) {
                return 0;
            }
            local_0xE = (uint8_t)(uint32_t)local_0xE + 1;
        }
        v2 = 1;
    } else {
        v2 = 0;
    }
    return v2;
}

// VA=0x400675
int32_t __cdecl main( int32_t p1, int64_t p2 )
{
    int32_t v1; // rax
    int32_t v2; // rax

    if( (uint32_t)p1 == 2 ) {
        v1 = check_password( *(p2 + 8) );
        if( (uint32_t)v1 == 1 ) {
            puts_2( "Congratulations!" );
            v2 = 0;
        } else {
            puts_2( "ko" );
            v2 = 1;
        }
    } else {
        fprintf_2( stderr, "Usage: %s password\n", *p2 );
        v2 = 1;
    }
    return v2;
}

// VA=0x4006f0
void __cdecl __libc_csu_init( int32_t p1, int64_t p2, int64_t p3 )
{
    int64_t v1; // rbx

    _init();
    v1 = 0;
    while( 1 ) {
        (*(&__frame_dummy_init_array_entry + v1 * 8))( (uint32_t)p1, p2, p3 );
        if( v1 == 0 ) {
            break;
        }
        v1 += 1;
    }
}

// VA=0x400760
inline void __cdecl __libc_csu_fini( void )
{
}

// VA=0x400764
inline void __cdecl _fini( void )
{
}

// VA=0x601080
void __unknown __gmon_start___1( void )
{
    goto &__gmon_start___1;
}

// VA=0x601088
int __cdecl puts( char * __s )
{
    goto &puts;
}

// VA=0x601090
unsigned long __cdecl strlen( char * __s )
{
    goto &strlen;
}

// VA=0x601098
void __unknown __libc_start_main_1( void )
{
    goto &__libc_start_main_1;
}

// VA=0x6010a0
int __cdecl fprintf( struct _IO_FILE * __stream, char * __format, ... )
{
    goto &fprintf;
}


