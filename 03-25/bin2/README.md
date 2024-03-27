Separate compilation for the HW2 solution with no header files.
Components:
- `main` stores the high-level logic of the program
- `binio` allows us to do input/output for the program (input in decimal, 
    output in binary)
- `conv` stores conversion functions between binary and decimal
- `menu` stores a menu function that will perform a particular binary 
    operation given the user's choice, and the functions that perform 
    binary operations
The interface of each of the "libraries" are defined in their 
corresponding header files (`binio.h`, `conv.h`, `menu.h`) and the
implementation is stored in the corresponding CPP file (`binio.cpp`, 
`conv.cpp`, `menu.cpp`).