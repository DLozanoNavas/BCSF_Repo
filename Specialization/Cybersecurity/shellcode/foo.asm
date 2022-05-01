.section .data
cmd:    .string "/bin/sh"               /* command string */
hand:   .string "-c"                    /* command arguments string */
args:   .string "ls -al"                /* arguments string */
argv:   .quad cmd                       /* array of command, command arguments and arguments */
        .quad hand
        .quad args
        .quad 0

.section .text
.globl _start
_start:
        movq    $59,            %rax    /* call execve system call */
        leaq    cmd(%rip),      %rdi    /* save command to rdi */
        leaq    argv(%rip),     %rsi    /* save args to rsi */
        movq    $0,             %rdx    /* save NULL to rdx */

        syscall                         /* make system call */