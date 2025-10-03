#!/bin/bash
set -xue

# QEMU file path
QEMU=qemu-system-riscv32

CXX=clang++

CFLAGS="-std=c++23 -O2 -g3 -Wall -Wextra --target=riscv32-unknown-elf -fuse-ld=lld -fno-stack-protector -ffreestanding -nostdlib"

$CXX $CFLAGS -Wl,-Tsrc/kernel/kernel.ld -Wl,-Map=kernel.map -fno-exceptions -fno-rtti -o kernel.elf \
     src/kernel/main.cxx  src/kernel/kernel.cxx src/kernel/arch/riscv32.cxx src/lib/libc/string.c

$QEMU -machine virt -bios default -nographic -serial mon:stdio --no-reboot -kernel kernel.elf
