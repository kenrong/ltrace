#define BREAKPOINT_VALUE { 0x7f, 0xe0, 0x00, 0x08 }
#define BREAKPOINT_LENGTH 4
#define DECR_PC_AFTER_BREAK 0
#define E_ENTRY_NAME    "_start"

#define LT_ELFCLASS	ELFCLASS32
#define LT_ELF_MACHINE	EM_PPC
#ifdef __powerpc64__
#define LT_ELFCLASS2	ELFCLASS64
#define LT_ELF_MACHINE2	EM_PPC64

#define PLTs_INIT_BY_HERE E_ENTRY_NAME

#else

#define PLTs_INIT_BY_HERE NULL

#endif
