cmd_/home/pf/git/kernel_practice/small/test.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /home/pf/git/kernel_practice/small/test.ko /home/pf/git/kernel_practice/small/test.o /home/pf/git/kernel_practice/small/test.mod.o