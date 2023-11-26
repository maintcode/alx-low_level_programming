section .data
    hello db "Hello, Holberton", 10, 0  ; String to be printed with newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello   ; Format string
    call printf      ; Call printf function
    pop rbp
    ret
