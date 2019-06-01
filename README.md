Read process from the linux /proc/ directory very quickly.

The program goes into /proc/ directory and for each processes retrieve
informations from the files stat, status and cmdline.

Compilation :

gcc Linux_proc_process_reading.c -o Linux_proc_process_reading

Usage : 

Linux_proc_process_reading > Linux_proc_process_reading.txt

It is an interesting alternative to existing programs such as top or ps,
the information you will get with this code is really more exhaustive.
