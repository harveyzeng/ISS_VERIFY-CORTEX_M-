# ISS_VERIFY-CORTEX_M-


##how to run your own application in QEMU-STM32(with GDB)

1. follow this website to set up QEMU-STM32 environment http://wiki.csie.ncku.edu.tw/embedded/Lab39

2. add test_m4 directory into stm32_p103_demos/demos directory

3. add three lines in the makefile

	DEMOS += test_m4
	
	demos/test_m4/main.elf: demos/test_m4/main.c
	
	demos/test_m4/main.elf: $(COMMON_FILES)
		$(CC) $(CFLAGS_LINK) -Idemos/test_m4/ -o $@ $^

4. enter 'make' on the terminal(at the stm32_p103_demos directory) to compile test_m4 directory

5. add run.gdb into stm32_p103_demos  directory

6. open two terminal:
 
one terminal

	$ ../qemu_stm32/arm-softmmu/qemu-system-arm -M stm32-p103 -gdb tcp::3333 -S -kernel demos/test_m4/main.bin  

the other terminal:

	$ arm-none-eabi-gdb -command=run.gdb

 Use GDB to compare QEMU-STM32 with  your ARMv7M-ISS

## Use cgdb to debug(GUI debug)

	$ sudo apt-get install cgdb
	
on step6 use 

	$ cgdb -d arm-none-eabi-gdb -command=run.gdb
	
instead of 

	$ arm-none-eabi-gdb -command=run.gdb



Author	Bo-Xiang, Zeng. NCKU caslab. an4001022@gmail.com
Date		2016.03.26
