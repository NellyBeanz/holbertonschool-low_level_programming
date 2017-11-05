Project on Bit Manipulation

0.0 
- Function that converts binary number to unsigned int
- Prototype: unsigned int binary_to_uint(const char *b)
- Return: converted number or 0 if there is one or more chars 
in the string that is not 0 or 1 or b is NULL

1.1 
- Function that prints the binary representation of a number
- Prototype: void print_binary(unsigned long int n)
- Return: void

2.10
- Function that returns the value of a bit at a given index
- Prototype: int get_bit(unsigned long int n, unsigned int index)
- Return: the value of the bit at index or -1 if error

3.11
- Function that sets the value of a bit to 1 at a given index
- Prototype: int set_bit(unsigned long int *n, unsigned int index)
- Return: 1 if success or -1 if error

4.100
- Function that sets the value of a bit to 0 at a given index
- Prototype: int clear_bit(unsigned long int *n, unsigned int index)
- Return: 1 if success or -1 if error

5.101
- Function that returns the number of bits needed to flip to get from
one number to another
- Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m)
- Return: number of bits