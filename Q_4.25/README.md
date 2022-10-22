# Problem 4.25 : Estimating the value of π

### Problem Statement
An interesting way of calculating π is to use a technique known as **Monte
Carlo**, which involves randomization. This technique works as follows:
Suppose you have a circle inscribed within a square, as shown in
Figure 4.25. (Assume that the radius of this circle is 1.)

• First, generate a series of random points as simple (x, y) coordinates.
These points must fall within the Cartesian coordinates that bound
the square. Of the total number of random points that are generated,
some will occur within the circle.

• Next, estimate π by performing the following calculation:
π = 4× (number of points in circle) / (total number of points)

Write a multithreaded version of this algorithm that creates a separate
thread to generate a number of random points. The thread will count
the number of points that occur within the circle and store that result
in a global variable. When this thread has exited, the parent thread will
calculate and output the estimated value of π.
Use **OpenMP** to parallelize the generation of points. Be
careful not to place the calculation of π in the parallel region, since you
want to calculate π only once.

It is worth experimenting with the number of random points generated. As a general rule, the
greater the number of points, the closer the approximation to π.

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

---
## References
1. [C Code for copying and pasting contents of a file](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/ "GeeksForGeeks")
2. Copy File Contents - [Sonnets by Shakespeare](https://github.com/brunoklein99/deep-learning-notes/blob/master/shakespeare.txt "Github Deep Learning Repo")
3. [Strace commands in Linux](https://www.geeksforgeeks.org/strace-command-in-linux-with-examples/ "GeeksForGeeks")
4. [getpid() documentation](https://man7.org/linux/man-pages/man2/getppid.2.html "GeeksForGeeks")
5. [System Calls Documentation](https://man7.org/linux/man-pages/man2/syscalls.2.html "man7.org") 
6. [OpenMP and GCC Instalation Guide](https://www.geeksforgeeks.org/openmp-introduction-with-installation-guide/ "GeeksForGeeks")