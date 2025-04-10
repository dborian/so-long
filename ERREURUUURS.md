# BREAK MALLOC

==40497== Memcheck, a memory error detector
==40497== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==40497== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==40497== Command: ./so_long maps/map.ber
==40497== 
==MBREAKER== The 2 malloc breaked position:
==MBREAKER==    at 0x40625b: ft_split (utils/parse_utils.c:41)
==MBREAKER==    by 0x4056ab: ft_map_read (map_read/map_read.c:66)
==MBREAKER==    by 0x40472a: main (main.c:24)
==MBREAKER==    by 0x4b17d8f: __libc_start_call_main (../sysdeps/nptl/libc_start_call_main.h:58)
==MBREAKER==    by 0x4b17e3f: __libc_start_main_impl (../csu/libc-start.c:392)
==40497== Invalid read of size 8
==40497==    at 0x405BD9: ft_check_lenght (check_map.c:50)
==40497==    by 0x405B04: ft_check (check_map.c:105)
==40497==    by 0x4056E1: ft_map_read (map_read.c:69)
==40497==    by 0x40472A: main (main.c:24)
==40497==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==40497== 
==40497== 
==40497== Process terminating with default action of signal 11 (SIGSEGV)
==40497==  Access not within mapped region at address 0x0
==40497==    at 0x405BD9: ft_check_lenght (check_map.c:50)
==40497==    by 0x405B04: ft_check (check_map.c:105)
==40497==    by 0x4056E1: ft_map_read (map_read.c:69)
==40497==    by 0x40472A: main (main.c:24)
==40497==  If you believe this happened as a result of a stack
==40497==  overflow in your program's main thread (unlikely but
==40497==  possible), you can try to increase the size of the
==40497==  main thread stack using the --main-stacksize= flag.
==40497==  The main thread stack size used in this run was 8388608.
==40497== 
==40497== HEAP SUMMARY:
==40497==     in use at exit: 1,150 bytes in 8 blocks
==40497==   total heap usage: 9 allocs, 1 frees, 1,229 bytes allocated
==40497== 
==40497== LEAK SUMMARY:
==40497==    definitely lost: 0 bytes in 0 blocks
==40497==    indirectly lost: 0 bytes in 0 blocks
==40497==      possibly lost: 0 bytes in 0 blocks
==40497==    still reachable: 1,150 bytes in 8 blocks
==40497==         suppressed: 0 bytes in 0 blocks
==40497== Rerun with --leak-check=full to see details of leaked memory
==40497== 
==40497== For lists of detected and suppressed errors, rerun with: -s
==40497== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

==43529== Memcheck, a memory error detector
==43529== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==43529== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==43529== Command: ./so_long maps/map.ber
==43529== 
==MBREAKER== The 9 malloc breaked position:
==MBREAKER==    at 0x40625b: ft_split (utils/parse_utils.c:41)
==MBREAKER==    by 0x4056c4: ft_map_read (map_read/map_read.c:67)
==MBREAKER==    by 0x40472a: main (main.c:24)
==MBREAKER==    by 0x4b17d8f: __libc_start_call_main (../sysdeps/nptl/libc_start_call_main.h:58)
==MBREAKER==    by 0x4b17e3f: __libc_start_main_impl (../csu/libc-start.c:392)
==43529== Invalid read of size 8
==43529==    at 0x40605E: fluid_fill (ft_fluid_fill.c:17)
==43529==    by 0x406007: ft_fluid_fill (ft_fluid_fill.c:40)
==43529==    by 0x405744: ft_map_read (map_read.c:74)
==43529==    by 0x40472A: main (main.c:24)
==43529==  Address 0x8 is not stack'd, malloc'd or (recently) free'd
==43529== 
==43529== 
==43529== Process terminating with default action of signal 11 (SIGSEGV)
==43529==  Access not within mapped region at address 0x8
==43529==    at 0x40605E: fluid_fill (ft_fluid_fill.c:17)
==43529==    by 0x406007: ft_fluid_fill (ft_fluid_fill.c:40)
==43529==    by 0x405744: ft_map_read (map_read.c:74)
==43529==    by 0x40472A: main (main.c:24)
==43529==  If you believe this happened as a result of a stack
==43529==  overflow in your program's main thread (unlikely but
==43529==  possible), you can try to increase the size of the
==43529==  main thread stack using the --main-stacksize= flag.
==43529==  The main thread stack size used in this run was 8388608.
==43529== 
==43529== HEAP SUMMARY:
==43529==     in use at exit: 1,150 bytes in 8 blocks
==43529==   total heap usage: 9 allocs, 1 frees, 1,229 bytes allocated
==43529== 
==43529== LEAK SUMMARY:
==43529==    definitely lost: 0 bytes in 0 blocks
==43529==    indirectly lost: 0 bytes in 0 blocks
==43529==      possibly lost: 0 bytes in 0 blocks
==43529==    still reachable: 1,150 bytes in 8 blocks
==43529==         suppressed: 0 bytes in 0 blocks
==43529== Rerun with --leak-check=full to see details of leaked memory
==43529== 
==43529== For lists of detected and suppressed errors, rerun with: -s
==43529== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

==44168== Memcheck, a memory error detector
==44168== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44168== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==44168== Command: ./so_long maps/map.ber
==44168== 
==MBREAKER== The 10 malloc breaked position:
==MBREAKER==    at 0x40617b: ft_strdup (utils/parse_utils.c:21)
==MBREAKER==    by 0x406280: ft_split (utils/parse_utils.c:44)
==MBREAKER==    by 0x4056c4: ft_map_read (map_read/map_read.c:67)
==MBREAKER==    by 0x40472a: main (main.c:24)
==MBREAKER==    by 0x4b17d8f: __libc_start_call_main (../sysdeps/nptl/libc_start_call_main.h:58)
==MBREAKER==    by 0x4b17e3f: __libc_start_main_impl (../csu/libc-start.c:392)
==44168== Invalid read of size 1
==44168==    at 0x406066: fluid_fill (ft_fluid_fill.c:17)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==  Address 0x6 is not stack'd, malloc'd or (recently) free'd
==44168== 
==44168== 
==44168== Process terminating with default action of signal 11 (SIGSEGV)
==44168==  Access not within mapped region at address 0x6
==44168==    at 0x406066: fluid_fill (ft_fluid_fill.c:17)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x40612E: fluid_fill (ft_fluid_fill.c:26)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406102: fluid_fill (ft_fluid_fill.c:24)
==44168==    by 0x406144: fluid_fill (ft_fluid_fill.c:27)
==44168==  If you believe this happened as a result of a stack
==44168==  overflow in your program's main thread (unlikely but
==44168==  possible), you can try to increase the size of the
==44168==  main thread stack using the --main-stacksize= flag.
==44168==  The main thread stack size used in this run was 8388608.
==44168== 
==44168== HEAP SUMMARY:
==44168==     in use at exit: 1,263 bytes in 14 blocks
==44168==   total heap usage: 15 allocs, 1 frees, 1,342 bytes allocated
==44168== 
==44168== LEAK SUMMARY:
==44168==    definitely lost: 0 bytes in 0 blocks
==44168==    indirectly lost: 0 bytes in 0 blocks
==44168==      possibly lost: 0 bytes in 0 blocks
==44168==    still reachable: 1,263 bytes in 14 blocks
==44168==         suppressed: 0 bytes in 0 blocks
==44168== Rerun with --leak-check=full to see details of leaked memory
==44168== 
==44168== For lists of detected and suppressed errors, rerun with: -s
==44168== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

==48866== Memcheck, a memory error detector
==48866== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==48866== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==48866== Command: ./so_long maps/map.ber
==48866== 
==MBREAKER== The 79 read breaked position:
==MBREAKER==    at 0x405986: read_file (map_read/read_map_from_file.c:59)
==MBREAKER==    by 0x405690: ft_map_read (map_read/map_read.c:64)
==MBREAKER==    by 0x40472a: main (main.c:24)
==MBREAKER==    by 0x4b17d8f: __libc_start_call_main (../sysdeps/nptl/libc_start_call_main.h:58)
==MBREAKER==    by 0x4b17e3f: __libc_start_main_impl (../csu/libc-start.c:392)
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4057B5: ft_map_size (map_read.c:24)
==48866==    by 0x40569D: ft_map_read (map_read.c:65)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4057D5: ft_map_size (map_read.c:24)
==48866==    by 0x40569D: ft_map_read (map_read.c:65)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4057FF: ft_map_size (map_read.c:26)
==48866==    by 0x40569D: ft_map_read (map_read.c:65)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x405A8B: ft_chain_calc (read_map_from_file.c:87)
==48866==    by 0x40624C: ft_split (parse_utils.c:41)
==48866==    by 0x4056AB: ft_map_read (map_read.c:66)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x405A0F: ft_strlen (read_map_from_file.c:75)
==48866==    by 0x40616B: ft_strdup (parse_utils.c:21)
==48866==    by 0x406280: ft_split (parse_utils.c:44)
==48866==    by 0x4056AB: ft_map_read (map_read.c:66)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4061B1: ft_strdup (parse_utils.c:24)
==48866==    by 0x406280: ft_split (parse_utils.c:44)
==48866==    by 0x4056AB: ft_map_read (map_read.c:66)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4062AF: ft_split (parse_utils.c:46)
==48866==    by 0x4056AB: ft_map_read (map_read.c:66)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x405A8B: ft_chain_calc (read_map_from_file.c:87)
==48866==    by 0x40624C: ft_split (parse_utils.c:41)
==48866==    by 0x4056C4: ft_map_read (map_read.c:67)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x405A0F: ft_strlen (read_map_from_file.c:75)
==48866==    by 0x40616B: ft_strdup (parse_utils.c:21)
==48866==    by 0x406280: ft_split (parse_utils.c:44)
==48866==    by 0x4056C4: ft_map_read (map_read.c:67)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4061B1: ft_strdup (parse_utils.c:24)
==48866==    by 0x406280: ft_split (parse_utils.c:44)
==48866==    by 0x4056C4: ft_map_read (map_read.c:67)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x4062AF: ft_split (parse_utils.c:46)
==48866==    by 0x4056C4: ft_map_read (map_read.c:67)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
==48866== Conditional jump or move depends on uninitialised value(s)
==48866==    at 0x405D50: ft_check_case (check_map.c:39)
==48866==    by 0x405B2A: ft_check (check_map.c:107)
==48866==    by 0x4056E1: ft_map_read (map_read.c:69)
==48866==    by 0x40472A: main (main.c:24)
==48866== 
Error
map wrong
 ==48866== 
==48866== HEAP SUMMARY:
==48866==     in use at exit: 0 bytes in 0 blocks
==48866==   total heap usage: 6 allocs, 6 frees, 1,121 bytes allocated
==48866== 
==48866== All heap blocks were freed -- no leaks are possible
==48866== 
==48866== Use --track-origins=yes to see where uninitialised values come from
==48866== For lists of detected and suppressed errors, rerun with: -s
==48866== ERROR SUMMARY: 12 errors from 12 contexts (suppressed: 0 from 0)