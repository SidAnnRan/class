- 2 VSCodes, 1 with assignments, 1 with class
- Set up fontsize in VSCode and terminal
- `export PROMPT_DIRTRIM=1` for shortening directory in Linux

## Compilation

### Activity
Show what `bin/` will look like after everything is separated out into their corresponding files

### Header files for classes
- Classes can go into header files, they are exempt from the One Definition Rule

### Activity
- Create `workspace/tennis`
- Copy `03-18/05tennis6.cpp`, `Points.txt`, and `Points.txt` into it
- Classes will go into header files
- Copy definitions of `GamePoints`, `Score()`, `printScore()` and declarations of `printGamePoints()`, `incrp1()`, `incrp2()`
  to `Score.h`.
- Copy definitions of `printGamePoints()`, `incrp1()`, `incrp2()` to `Score.cpp`.
- Keep `main()` in `05tennis6.cpp` and rename it to `main.cpp`

### GNU make
- Make a copy `tennis2` of `tennis`
- Create an empty `Makefile`
- `cd` to `tennis2` in the terminal, run `which make`, `make --version`
- Run `make`
- Create targets `score.bin`, `main.o`, `score.o`
- Run `make` and explain what's happening
- Add `all` target
- Run `make` again and explain why nothing happens
- Change a `cout` statement in `Score.cpp` and now run make to see how only dependent targets are rerun
- Add a `clean` and run `make clean`
- Create a file called `clean`, explain what happens
- Make them `.PHONY` targets

## Classes

### Function Overloading
- Type `01overload.cpp`
- Change to `02overload2.cpp`

### Default Constructor
- What is a default constructor?
- `03defaultconstr.cpp`: Compiler provides a default constructor when there are no constructors.
- Remove default initializers for private members. The `const` throws an error because it is not initialized anymore.
- `04defaultconstr2.cpp`: We can create default constructor.
- `05defaultconstr3.cpp`: Explicitly defaulted default constructor.
- `06defaultconstr4.cpp`: No default constructor. It is only created if there are no user-defined constructors. We would have to define one explicitly.
- `07defaultconstr5.cpp`: Overloaded constructors.
- `08defaultconstr6.cpp`: Can only have one default constructor. And default arguments also make a default constructor.
- Use default constructor only when it makes sense. It does for `Fraction` but not for `Employee`.

### Temporary Objects
- Copy `09tempobect.cpp` and change to `10tempobject2.cpp`.

### Copy constructor
- Type `11implcopyconstr.cpp`. It uses an implicit copy constructor.
- Modify to `12copyconstr.cpp`. This is an explicit copy constructor. Why is the string printed before the print outputs?
- Compiler might optimize away copy constructors, so don't do things other than copying in there.
- Modify to `13copyconstr2.cpp` to show explicitly defaulted copy constructor.
- Modify to `14copyconstr3.cpp` to show deleted copy constructor.