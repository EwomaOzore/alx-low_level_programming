section .data
    hello db "Hello, Holberton", 10 ; 10 is the ASCII code for newline
    format db "%s", 0 ; Null-terminated string format specifier

section .text
    global _start_asm

    extern printf
    extern exit

_start_asm:
    ; Call printf
    mov rdi, format ; Set the format string address
    mov rsi, hello  ; Set the argument (string) address
    mov rax, 0      ; Set rax to 0 for printf
    call printf

    ; Exit the program
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    call exit
