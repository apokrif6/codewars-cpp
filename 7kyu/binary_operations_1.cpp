//Your work is to write a method that takes a value and an index, and returns the value with the bit at given index flipped.

//The bits are numbered from the least significant bit (index 1).

//Example:

//flip_bit(15,4) == 7  // 15 in binary is 1111, after flipping 4th bit, it becomes 0111, i.e. 7
//flip_bit(15,5) == 31 // 15 in binary is 1111, 5th bit is 0, after flipping, it becomes 11111, i.e., 31

//Note : index number can be out of number's range : e.g number is 3 (it has 2 bits) and index number is 8(for C# this number is up to 31) -> result will be 131

int flip_bit(int value, size_t index) {
    return value ^ (1 << --index);
}
