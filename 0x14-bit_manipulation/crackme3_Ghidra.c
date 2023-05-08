#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;

  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_004004a0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;

  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;

  sVar1 = strlen(__s);
  return sVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;

  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];

  __libc_start_main(main,unaff_retaddr,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00400545)
// WARNING: Removing unreachable block (ram,0x0040054f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400593)
// WARNING: Removing unreachable block (ram,0x0040059d)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7585 == '\0') {
    deregister_tm_clones();
    completed_7585 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004005ea)
// WARNING: Removing unreachable block (ram,0x004005e0)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 check_password(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  byte local_e;

  sVar1 = strlen(param_1);
  if (sVar1 == 4) {
    for (local_e = 0; local_e < 4; local_e = local_e + 1) {
      if ((uint)(byte)param_1[local_e] != (0x46c6f48U >> ((local_e & 3) << 3) & 0xff)) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 main(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;

  if (param_1 == 2) {
    iVar1 = check_password(param_2[1]);
    if (iVar1 == 1) {
      puts("Congratulations!");
      uVar2 = 0;
    }
    else {
      puts("ko");
      uVar2 = 1;
    }
  }
  else {
    fprintf(stderr,"Usage: %s password\n",*param_2);
    uVar2 = 1;
  }
  return uVar2;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;

  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}



