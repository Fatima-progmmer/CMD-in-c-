
# **CMD in C - Command Prompt-like Application**

Welcome to the **CMD in C** project! This project is a simple **Command Prompt-like application** built using **C** programming language. The goal is to create a basic terminal interface that can execute system commands, just like a real shell.

## **Project Overview**

This project was created to explore how command-line interfaces interact with the system and to learn more about **system-level programming** using **C**. The application allows users to input commands, and the program will attempt to execute them in the system's shell.

## **Features**

- **Command Execution**: Execute system commands (e.g., `dir`, `ls`, etc.) from within the C program.
- **Basic Shell**: A simple terminal interface where you can type commands and see the output.
- **Error Handling**: Handles invalid commands and provides appropriate error messages.

## **Getting Started**

To get started with the **CMD in C** application, follow these steps:

### 1. Clone the repository
```bash
git clone https://github.com/Fatima-progmmer/CMD-in-c
cd CMD-in-c
```

### 2. Compile the C program
Use a C compiler to compile the program. For example, using **GCC**:
```bash
gcc -o cmd cmd.c
```

### 3. Run the program
Once the program is compiled, you can run it:
```bash
./cmd
```

### 4. Start using the shell
After running the program, you can type in system commands like you would in a regular command prompt or terminal. For example:
```bash
dir
ls
echo "Hello, World!"
```

## **Project Structure**

- **cmd.c**: The main source file that implements the basic command prompt functionality.
- **README.md**: Documentation for the project (this file).

## **Challenges and Learnings**

This project was a great learning experience in **system-level programming**. Some challenges faced along the way included handling errors and executing shell commands correctly. However, the process deepened my understanding of how command-line interfaces and operating systems interact with each other.

## **Future Improvements**

- Add support for more complex shell commands.
- Implement command history (e.g., up/down arrows to navigate previous commands).
- Enhance error handling for unsupported commands or invalid inputs.
- Implement more advanced features like piping and redirection.

## **License**

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
