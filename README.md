# My C Programming Journey

Welcome to my C Programming repository! This repository showcases my learning journey in C programming, including projects, courses, tutorials, notes, and more.

## Table of Contents

1. [Introduction](#introduction)
2. [Getting Started](#getting-started)
3. [Courses & Tutorials](#courses-and-tutorials)
4. [Projects](#projects)
5. [Notes](#notes)
6. [Resources](#resources)
7. [Contributing](#contributing)
8. [License](#license)

## Introduction

This repository documents my progress as I learn C programming. Here, you'll find the projects I've worked on, the courses and tutorials I've completed, and my personal notes and insights.

## Getting Started

### Installation

To get started with C programming, you'll need to install a C compiler. I recommend using GCC, which is available on most platforms.

- **Windows:** Download and install [MinGW](http://www.mingw.org/)
- **Linux:** Install GCC using your package manager (e.g., `sudo apt-get install gcc`)
- **MacOS:** Install Xcode Command Line Tools (`xcode-select --install`)

### Writing Your First Program

Create a file named `hello.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Compile and run your program:

```sh
gcc hello.c -o hello
./hello
```

## Courses and Tutorials

1. [Introduction to C Programming](#introduction-to-c-programming)
2. [Intermediate C Programming](#intermediate-c-programming)
3. [Advanced C Programming](#advanced-c-programming)

### Introduction to C Programming

Course: [Learn-C.org](https://www.learn-c.org/)
Notes: [Introduction Notes](notes/introduction.md)

### Intermediate C Programming

Course: [Coursera: C Programming for Beginners](https://www.coursera.org/learn/c-programming-for-beginners)
Notes: [Intermediate Notes](notes/intermediate.md)

### Advanced C Programming

Course: [Udemy: Advanced C Programming](https://www.udemy.com/course/advanced-c-programming/)
Notes: [Advanced Notes](notes/advanced.md)

## Projects

1. [Simple Calculator](#simple-calculator)
2. [Student Management System](#student-management-system)
3. [Bank Account Simulation](#bank-account-simulation)

### Simple Calculator

Build a simple calculator that can perform basic arithmetic operations.

Source Code: [simple-calculator.c](projects/simple-calculator.c)

### Student Management System

Create a system to manage student records including adding, deleting, and searching for students.

Source Code: [student-management.c](projects/student-management.c)

### Bank Account Simulation

Simulate a bank account with features like deposit, withdrawal, and balance inquiry.

Source Code: [bank-account.c](projects/bank-account.c)

## Notes

1. [Variables and Data Types](notes/variables.md)
2. [Control Structures](notes/control-structures.md)
3. [Functions](notes/functions.md)
4. [Pointers](notes/pointers.md)
5. [Data Structures](notes/data-structures.md)

## Resources

- [Official C Documentation](https://en.cppreference.com/w/c)
- [Learn C Online](https://www.learn-c.org/)
- [C Programming Wikibook](https://en.wikibooks.org/wiki/C_Programming)

## Contributing

I welcome contributions! Please read the [Contributing Guidelines](CONTRIBUTING.md) to get started.

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
