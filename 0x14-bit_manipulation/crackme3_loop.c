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

__int64 __fastcall check_password(const char *a1)
{
  unsigned __int8 i; // [rsp+1Ah] [rbp-6h]

  if ( strlen(a1) != 4 )
    return 0LL;
  for ( i = 0; i <= 3u; ++i )
  {
    if ( (unsigned __int8)a1[i] != (unsigned __int8)(0x46C6F48u >> (8 * i)) )
      return 0LL;
  }
  return 1LL;
}


word32 check_password(union Eq_67 * rdi)
{
	uint64 rax_69;
	if (strlen(rdi) != 0x04)
		rax_69 = 0x00;
	else
	{
		cu8 bLoc0E_83;
		for (bLoc0E_83 = 0x00; bLoc0E_83 <= 0x03; ++bLoc0E_83)
		{
			if ((word32) *((char *) rdi + (uint64) bLoc0E_83) != (0x046C6F48 >> (bLoc0E_83 << 0x03) & 0xFF))
			{
				rax_69 = 0x00;
				return (word32) rax_69;
			}
		}
		rax_69 = 0x01;
	}
	return (word32) rax_69;
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


// Address range: 0x4005f6 - 0x400675
int64_t check_password(int64_t str) {
    // 0x4005f6
    if (strlen((char *)str) != 4) {
        // 0x400673
        return 0;
    }
    int32_t v1 = 0; // 0x400612
    char v2 = *(char *)((int64_t)(v1 % 256) + str); // 0x400637
    int64_t result = 0; // 0x400655
    while (v2 == (char)(0x46c6f48 >> (8 * v1 & 24))) {
        // 0x40065e
        v1 = 0x1000000 * v1 + 0x1000000 >> 24;
        result = 1;
        if ((char)v1 >= 4) {
            // break -> 0x400673
            break;
        }
        v2 = *(char *)((int64_t)(v1 % 256) + str);
        result = 0;
    }
    // 0x400673
    return result;
}



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
