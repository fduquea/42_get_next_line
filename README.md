# 📖 Get_Next_Line [![fduque-a's 42 get_next_line Score](https://badge42.vercel.app/api/v2/cli4i2e8c001108jt19bvwefz/project/3083130)](https://github.com/JaeSeoKim/badge42)

## Description

Write a function that returns a line read from a file descriptor.

◦ Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.

◦ Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.

◦ Make sure that your function works as expected both when reading a file and when reading from the standard input.

◦ Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character

### Return value

◦ Read line: correct behavior.

◦ NULL: there is nothing else to read, or an error occurred.

### Function prototype

```C
char *get_next_line(int fd);
```

## Allowed functions

| Function  | Description                                                                                                    |
|-----------|----------------------------------------------------------------------------------------------------------------|
| `malloc`  | Allocates a block of memory of the specified size in bytes. Returns a pointer to the allocated memory or `NULL`.|
| `free`    | Deallocates the previously allocated memory block.                                                              |
| `read`    | Reads data from a file descriptor into a buffer. Returns the number of bytes read or -1 on error.             |
| :x: libft | Usage of our libft project library is NOT allowed.                                                              |

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
