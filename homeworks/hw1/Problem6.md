# Problem 6
Write a program called `prob6.cpp` that defines 3 integers, `choice`, `x` and `y`, and inputs their value from the user. 
The executable built from your program should have the exact following interface, where the underscore `_` denotes the location
where the user enters their input. The first one should input `choice`, the second `x`, and the third `y`.
```
What is your choice? _

Enter the first number: _
Enter the second number: _
```
Notice that a newline is added by the user after entering their input (we are asking for two newlines above). Move all input and output to a function called `Choice` and call it from `main`. 