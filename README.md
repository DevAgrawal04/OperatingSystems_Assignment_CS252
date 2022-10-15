# CS252 OS Assignment
This repository contains solutions of Problem 2.24 and 4.25 from the textbook **Operating System Concepts 10th Edition** by _Abraham Silberschatz, Peter Baer Galvin and Greg Gagne_. 
- Name: Dev Agrawal 
- Roll No: 201ME169

## [Problem 2.24: Tracing System Calls](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/edit/main/Q_2.24/README.md)

### Problem Statement
In Section 2.3 (Sytsem Calls), we described a program that copies the contents of one file
to a destination file. This program works by first prompting the user for
the name of the source and destination files. Write this program using
either the POSIX or Windows API. Be sure to include all necessary error
checking, including ensuring that the source file exists.
Once you have correctly designed and tested the program, if you used
a system that supports it, run the program using a utility that traces system calls. Linux systems provide the strace utility, and macOS systems
use the dtruss command. (The dtruss command, which actually is a
front end to dtrace, requires admin privileges, so it must be run using
sudo.) These tools can be used as follows (assume that the name of the
executable file is FileCopy:
Linux:
strace ./FileCopy
macOS:
sudo dtruss ./FileCopy
Since Windows systems do not provide such a tool, you will have to
trace through the Windows version of this program using a debugger.

## [Problem 4.25: Estimating the value of π](https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252/edit/main/Q_4.25/README.md)

### Problem Statement
An interesting way of calculating π is to use a technique known as **Monte
Carlo**, which involves randomization. This technique works as follows:
Suppose you have a circle inscribed within a square, as shown in
Figure 4.25. (Assume that the radius of this circle is 1.)

• First, generate a series of random points as simple (x, y) coordinates.
These points must fall within the Cartesian coordinates that bound
the square. Of the total number of random points that are generated,
some will occur within the circle.

![MonteCarlo](https://media.geeksforgeeks.org/wp-content/uploads/MonteCarlo.png)

• Next, estimate π by performing the following calculation:
π = 4 × (number of points in circle) / (total number of points)
- (Reason: Area of Square / Area of circle = (2r)<sup>2</sup>/πr<sup>2</sup>  = π/4)

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


## _References_
1. [How to measure time taken by a function in C? by Hackerrank](https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/)
2. [Calculating pi with Monte Carlo using OpenMP by Codereview](https://codereview.stackexchange.com/questions/256274/calculating-pi-with-monte-carlo-using-openmp)
3. [Senior's Github Repo](https://github.com/sankronaldo/CS-252-OS-Assignment)
_Add permission mail from senior_
