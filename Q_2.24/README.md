# Tracing System Calls using Strace

## Requirements
- Linux Based Kernel (for strace)
- GNU Compiler Collection (GCC)


For an Installation Guide, kindly refer the [References](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/tree/main/Q_2.24##References).

--- 

## Compiling the File

To compile the file, run the following command:
>  gcc -o copy_code copy_code.c

Here, copy_code is the name of the object file given by us, and copy_code.c is the file we're trying to compile.

---
## Using Strace

Note: Strace works only on Linux Based Terminals, for installation guides kindly refer the [References](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/edit/main/Q_2.24/README.md#references)

We use strace as follows:
> strace ./copy_code

It'll output all of the system calls onto the terminal

To store this raw terminal output we can use the command:
> strace -o log_raw.txt ./copy_code

The raw log terminal will now be saved as [log_raw.txt](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/blob/main/Q_2.24/log_raw.txt)

Strace can also output the count number of system calls:
>strace -c ./copy_code

Now we can export this terminal output to a file as follows:
> strace -o log_table.txt -c ./copy_code

This saves our tabular terminal output to a file named [log_table.txt](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/blob/main/Q_2.24/log_table.txt)

---
## System Calls Details


---
## References
1. [C Code for copying and pasting contents of a file](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/ "GeeksForGeeks")
2. Copy File Contents - [Sonnets by Shakespeare](https://github.com/brunoklein99/deep-learning-notes/blob/master/shakespeare.txt "Github Deep Learning Repo")
3. [Strace commands in Linux](https://www.geeksforgeeks.org/strace-command-in-linux-with-examples/ "GeeksForGeeks")
4. [getpid() documentation](https://man7.org/linux/man-pages/man2/getppid.2.html "GeeksForGeeks")
5. [OpenMP and GCC Instalation Guide](https://www.geeksforgeeks.org/openmp-introduction-with-installation-guide/ "GeeksForGeeks")

---
## Additional Hardware Information

### Kernel Version
Kernel version can be found using the following command in linux based terminals:
> uname -r 

> 5.10.16.3-microsoft-standard-WSL2

### Processor Details
- Name: [AMD Ryzen™ 7 5800H](https://www.amd.com/en/products/apu/amd-ryzen-7-5800h "Official Specs by AMD")
- Number of CPU Cores: 8
- Number of Threads: 16
- Base Clock: 3.2GHz
- Max Boost Clock: Upto 4.4 Ghz
- L2 Cache: 4 MB
- L3 Cache: 16 MB   
- Default TDP: 45W
