*This project has been created as part of the 42 curriculum by bgebreeg*

# Get Next Line (GNL) - 42 Project

## Description
The Get Next Line project is a C programming exercise from 42.  
The goal of this project is to implement a function called `get_next_line()` that reads a file descriptor line by line, returning one line at a time. Unlike reading the entire file at once, this approach is memory-efficient and works well with very large files or streams.  

This project demonstrates:  
- Dynamic memory allocation  
- File I/O using file descriptors  
- Handling multiple file descriptors independently  
- Modular and maintainable code  
- Proper memory management to avoid leaks

The project is designed so that each call to `get_next_line()` returns the next line, including the newline character if it exists.


## How the Program Works

The main logic is implemented in `get_next_line.c`, which contains four main functions:

### 1. `get_next_line(int fd)`
This is the main function called by the user. It:  
- Uses a **static buffer** (`stash`) to store leftover data between calls.  
- Calls `read_and_stash()` to read new data from the file descriptor.  
- Calls `extract_line()` to isolate the next line.  
- Calls `clean_stash()` to remove the returned line from the buffer.  
- Returns `NULL` when there is nothing left to read or an error occurs.

### 2. `read_and_stash(int fd, char *stash)`
- Reads data from the file descriptor in chunks of size `BUFFER_SIZE`.  
- Appends the read data to the existing `stash` (buffer).  
- Stops reading when a newline is found or EOF is reached.  
- Returns the updated `stash` or `NULL` on error.

### 3. `extract_line(char *stash)`
- Extracts the first line from the `stash`.  
- Allocates memory for the line dynamically.  
- Includes the newline character if present.  
- Returns `NULL` if there is no data to read.

### 4. `clean_stash(char *stash)`
- Removes the line that was returned from `stash`.  
- Keeps any leftover data for the next call.  
- Frees memory for old stash to avoid leaks.  
- Returns the updated stash or `NULL` if nothing is left.

**Helper functions used (not shown here):**  
- `ft_strlen()` – calculates the length of a string.  
- `ft_strchr()` – checks if a character exists in a string.  
- `ft_strdup()` – duplicates a string.  
- `ft_strjoin()` – concatenates two strings.


## Instructions

### Requirements
- C compiler (e.g., `gcc`)  
- Linux or macOS  
- Define `BUFFER_SIZE` (number of bytes read per call, can be set in code)

### Compilation
Compile your program with:

gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c -o gnl


Materials 

https://github.com/jdecorte-be/42-Get-next-line
https://youtu.be/-Mt2FdJjVno?si=qGk9P0KUeRVKrrvK
https://www.geeksforgeeks.org/c/c-programming-language/


# Ai usage 

AI was used to understand how some functions work, to clarify the logic behind the algorithm, and for small practice exercises while learning the project concepts. Additionally, AI assisted in structuring the README.md file.