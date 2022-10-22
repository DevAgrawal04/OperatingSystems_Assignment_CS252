# Problem 4.25 : Estimating the value of π

## Requirements
- GNU Compiler Collection (GCC)
- OpenMP 

For installation guide, kindly refer the [References](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/tree/main/Q_4.25#references)

---
## Compiling the File

To compile the file, run the following command:
>  gcc -fopenmp 4_25.c -lm

Here, 4_25.c is the name of the file we're trying to compile.
A file titled **a.out** will get created.


Run the file using the following command:
> time ./a.out

We prefix the run command with the keyword [**time**](https://www.geeksforgeeks.org/time-command-in-linux-with-examples/#:~:text=time%20command%20in%20Linux%20is,a%20command%20when%20it%20terminates. "GeeksForGeeks") to print the runtime of the file onto the terminal.
- <ins>‘real‘ time</ins> is the time elapsed wall clock time taken by a command to get executed, while <ins>‘user‘</ins> and <ins>‘sys‘ time</ins> are the number of CPU seconds that command uses in user and kernel mode respectively. 

---
## Achieving Synchronization 
Multithreaded Solutions involving a shared variable (_inside_count_) can lead to race conditions. To avoid race conditions, **reduction** has been used in the solution.
> #pragma omp parallel for **reduction(+: inside_circle)** 
- The reduction clause specifies an operator and one or more list items.
- For each item, a private copy is created on each thread, and is initialized appropriately for the operator.
- After the end of the region, the original list item is updated with the values of the private copies using the specified operator. 
##### Reference: 2.19.5.4 [Reduction Clause Documentation](https://www.openmp.org/spec-html/5.0/openmpsu107.html "openmp.org") 

---
## Thread Performance Analysis
The variation of turnaround time of the solution with degree of parallelisation has been plotted as follows:

![Time vs Degree of Parallelisation](https://raw.githubusercontent.com/DevAgrawal04/OperatingSystems_Assignment_CS252/main/Q_4.25/Thread%20Performance%20Graph.png?token=GHSAT0AAAAAABZYIVALJ2Y6E3OMFRR2ZAIMY2UFEMA "Thread Performance Analysis Graph") 

##### (Kindly note that this graph is for representation purposes only, and the values are subject to change as the performance mainly depends on how the tasks are divided among the threads, which is handled internally by OpenMP.) 

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

---
## References
1. [Open MP Documentation](https://github.com/ResearchComputing/Documentation/blob/main/docs/programming/OpenMP-C.md "GitHub")
2. [OpenMP and GCC Instalation Guide](https://www.geeksforgeeks.org/openmp-introduction-with-installation-guide/ "GeeksForGeeks")
3. [Calculating pi with Monte Carlo using OpenMP by Codereview](https://codereview.stackexchange.com/questions/256274/calculating-pi-with-monte-carlo-using-openmp "CodeReview")
4. [Estimating the value of Pi using Monte Carlo](https://www.geeksforgeeks.org/estimating-value-pi-using-monte-carlo/  "GeeksForGeeks")
5. [2.19.5.4 _reduction_ Clause](https://www.openmp.org/spec-html/5.0/openmpsu107.html "OpenMP Reduction Documentation") 
6. [Time command in Linux with examples](https://www.geeksforgeeks.org/time-command-in-linux-with-examples/#:~:text=time%20command%20in%20Linux%20is,a%20command%20when%20it%20terminates. "GeeksForGeeks")

---
## Author
[Dev Agrawal](https://github.com/DevAgrawal04 "GitHub")

- [LinkedIn](https://www.linkedin.com/in/dev-agrawal-04/ "dev-agrawal-04")
  
For any queries or feedback, please feel free to reach out.