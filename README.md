# 📖 Get_Next_Line [![fduque-a's 42 get_next_line Score](https://badge42.vercel.app/api/v2/cli4i2e8c001108jt19bvwefz/project/3083130)](https://github.com/JaeSeoKim/badge42)

## Description

Write a function that returns a line read from a file descriptor.

◦ Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.

◦ Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.

◦ Make sure that your function works as expected both when reading a file and when reading from the standard input.

◦ Please note that the returned line should include the terminating \n character, except if the end of the file was reached and does not end with a \n character

### Return value

◦ Read line: correct behavior.

◦ NULL: there is nothing else to read, or an error occurred.

### Function prototype

```C
char *get_next_line(int fd);
```

## Explanation

This program provides an implementation of the `get_next_line` function, which reads a file descriptor line by line until the end of the file (EOF) or a newline character is encountered. The function dynamically allocates memory to store the lines read from the file descriptor.

The program consists of several helper functions:

- `ft_strlen_gnl`: Calculates the length of a string.
- `ft_strchr_gnl`: Locates the first occurrence of a character in a string.
- `ft_strjoin_gnl`: Concatenates two strings, dynamically allocating memory for the result.
- `ft_firstline`: Extracts the first line from a string, up to the newline character or end of string.
- `ft_secondline`: Extracts the remaining lines from a string, starting from the newline character or end of string.

The `get_next_line` function is the main function that allows reading a file descriptor line by line. It calls the `get_line_and_next_one` function to retrieve the next line from the file descriptor, manages the static buffer, and extracts the first line using `ft_firstline`. It then updates the static buffer with the remaining lines using `ft_secondline` and returns the current line read from the file descriptor.

To use the program, simply call the `get_next_line` function with a valid file descriptor as the argument. The function will return each line from the file descriptor until the end of the file or an error occurs. If there is nothing else to read or if an error occurred, the function returns `NULL`.

The program is compliant with the requirements of the 42 Network, except for the usage of the `libft` library.

## Allowed functions

| Function  | Description                                                                                                    |
|-----------|----------------------------------------------------------------------------------------------------------------|
| `malloc`  | Allocates a block of memory of the specified size in bytes. Returns a pointer to the allocated memory or `NULL`.|
| `free`    | Deallocates the previously allocated memory block.                                                              |
| `read`    | Reads data from a file descriptor into a buffer. Returns the number of bytes read or -1 on error.             |
| :x: libft | Usage of our libft project library is NOT allowed.                                                              |

## Found any issues? Contact me! 📥

- Email: fduque-a@student.42porto.com

## Might interest you! :sparkles:

- Check my [42 common-core progress](https://github.com/fduquea/42cursus) :chart_with_upwards_trend:
- My [42 intra profile](https://profile.intra.42.fr/users/fduque-a) :bust_in_silhouette:
