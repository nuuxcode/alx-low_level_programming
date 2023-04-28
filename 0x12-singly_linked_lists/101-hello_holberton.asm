section .data
    msg db "Hello, Holberton", 10
    len equ $ - msg + 1

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]
    xor eax, eax
    call printf

    mov eax, 0
    leave
    ret
