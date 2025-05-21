# Review for chapter 2

1. What is meant by the term *prompt*?
   1. A prompt is a text message display on the screen to prompt the user
   into entering some information.
1. Which operator do yoususe to read into a variable?
   1. =
1. What notations can you use to read into a variable?
   1. v=1;
   1. cin >> v;
   1. v+=1;
1. If you want the uer to input an integer value into your program for a
   variable named `number`, what are two lines of code your could write to
   ask the user to do it and to input the valur into your program?
   1. `cout << "Enter a number: "; cin >> number;`
1. What is `\n` called and what purpose does it serve?
   1. `\n` is referred to a newline. It denotes the screen's cursor advance
   to the first column on the specified line.
1. What terminates input into a string?
   1. whitespace
1. What terminates input into an integer?
   1. whitespace
1. How would you write the following as a single line of code:

   ```c+
   cout << "Hello, ";
   cout << first_name;
   cout << "!\n";
   ```

   1. `cout << "Hello, " << first_name << "!\n";
1. What is an object?
   1. A structure in memory that can contain data and/or code.
1. What is a literal?
   1. A value that is spelled out in the source code. Literals can be used
   in assignment and comparison operations.
1. What kinds of literals are there?
   1. integers, floating point numbers, strings, booleans, and characters
1. What is a variable?
   1. A location in memory that stores objects.
1. What are the typical sizes for a `char`, and `int`, and a `double`?
   1. `char` – 1-4 bytes, `int` – 4 bytes, `double` – 8 bytes
1. What measures do we use for the size of small entities in memory, such as
   `int`s and `string`s?
   1. variable sizes are listed in bytes (i.e. 8 binary bits = 1 byte)
1. What is the difference between `=` and `==`?
   1. `=` is an assignment operator that assigns a value to an object. `==` is
   a comparison operator that checks to see if two objects have the same value.
1. What is an initialization and how does it differ from an assignment?
   1. Initialization is when you assign a value to a variable for the firt
   time. Assignment happens any time you store a value in a variable.
1. What is string concatenation and how do you make it work in C++?
   1. String concatenation is when you combine the values of two or more
   strings and to create a single string. Use the `+` or `+=` operators to
   concatenate strings.
1. What operators can you apply to an `int`?
   1. `+`, `-`, `*`, `/`. `%`, `=`, `+=`', `-=`, `*=`, `/=`, `%=`
1. Which if the following are legal names in C++? If a name is no legal,
   why not?
   1. `This_little_pig` – valid
   `George@home` – invalid – contains `@`
   `correct?` – invalid – contains `?`
   `This_1_is_fine` – valid
   `stroustrup.com` – invalid – contains `.`
   `2_For_1_special` – invalid – starts with a number
   `MineMineMine` – valid
   `$PATH' – invalid – contains `$`
   `latest thing` – contains ` `
   `number` – valid
1. Give five examples of legal names that you shouldn't use because they are
   likely to cause confusion.
   1. `n0`, `he1lo`, `O0o`, `l1l`, `xXXx`
1. What are some good rules for choosing names?
   1. Keep the short
   1. Use names that match their usage
1. What is type safety and why is it important?
   1. Type safety is when the compiler makes sure that any value assigned to
   an object matches its declared type. It reduces errors.
1. Why cna conversion from `double` to `int` be a bad thing?
   1. The range of `double` exceeds the range of `int`, and can be larger
   than `int`s can store or so small that they become 0 when converted to
   `int`.
1. Define a rule to help decide if a conversion from one type to another is
   safe or unsafe.
   1. Vales that are not whole numbers should be stored in an `int` unless its
   absolute value exceeds the limes of `int`.
1. How can we avoid undesirable conversions?
   1. Don't use `auto`
1. What are the uses of `auto`?
   `auto` can save typing for complicated types.
