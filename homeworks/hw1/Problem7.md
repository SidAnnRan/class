# Problem 7
Now we'll use the code from `Menu` and `Choice` to build a basic calculator in a new file called `prob7.cpp`. The interface of the calculator will begin like this:
```
Integer Calculator

Choose from the following menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division

What is your choice? _

Enter the first number: _
Enter the second number: _

```
and end with a line that depends on the user's input. The following table shows the expected output:
| Value of `choice` | Expected output | Replace R with |
|-------------------|-----------------|----------------|
|`1`| X` + `Y` = `R | Sum of values in `x` and `y`|
|`2`| X` - `Y` = `R | Difference of values in `x` and `y`|
|`3`| X` * `Y` = `R | Product of values in `x` and `y`|
|`4`| X` / `Y` = `R | Quotient of values in `x` and `y`|
|Any other integer|`Invalid choice!`|
where X and Y should be replaced with the values of `x` and `y`.

For example:
```
Integer Calculator

Choose from the following menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division

What is your choice? 1

Enter the first number: 11
Enter the second number: 12

11 + 12 = 23
```

Another example of the expected output:
```
Integer Calculator

Choose from the following menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division

What is your choice? 5

Enter the first number: 1  
Enter the second number: 2

Invalid choice!
```