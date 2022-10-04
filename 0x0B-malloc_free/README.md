# malloc & free
### malloc
The malloc() function allocates size bytes and returns a pointer to the allocated memory.

The memory is not initialized.

### free
When the allocated memory is not needed anymore, you must return it to the OS by calling the function free

The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc(), calloc() or realloc().

