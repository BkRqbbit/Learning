# JavaScript
JavaScript is the programming language of the web.\
We can say this, because most of the web is built using some javascript technologies.\
This is because most modern web browsers (used in desktop, mobile devices) does include a JavaScript interpreter, which allows javascript code to be executed.

JavaScript is a programming language used to create dynamic and interactive web pages, in addition to HTML and CSS web technologies.\
It can be used on both the server side and the client side of applications.

The server side of an application is known as the backend, that is the part of an application that is run on computer servers and performs logic operations, like manipulating data, and connects with the database to store / consult information.\
The client side of an application is commonly known as the front-end, and it usually runs on the device of the user, it is the visual part of an application.

With this programming language we can add functionalities that respond to user actions, receive and transform user input data, depending on the purpose of our site.

JavaScript is a high-level, dynamic, interpreted programming language, and is well suited to object-oriented and functional programming styles.\
The variables you use, are untyped.\
This does gives you more flexibility in comparison to other languages, but you must be careful when handling data, because you may get unexpected results.

Even when JavaScript includes multiple technical terms, and features from other languages, keep in mind that you don't need to know all of that stuff in order to learn javascript.\
But if you do, it is a plus!

In order to execute some JavaScript code, you need to select the host, which can be a web browser, or install node on a computer.

## Pre-requisite tools
In order to be able to write JavaScript programs, you must have a set of tools installed.

You can choose whatever web browser you prefer.\
It is recommended that you use a popular and well-known browser due to two principal reasons.\
First is that it already has support for the most recent features of the language\
Second reason is that many people is using it, so any program that you run on your browser, it will be compatible with more people using it.

Second thing you will need to be able to write some JavaScript code on your computer, is a text editor.\
You can either use the default one that is pre-installed on your computer, or the one that you prefer the most.

The tools that you need to start programming in JavaScript are mostly already installed on your computer.\
So you might not have any prior problem to start programming some JS programs.

## Add JavaScript file to your web
In order to add a JavaScript file, you need to use the `<script>...</script>` tag in your html content.

You must use the attribute `scr` to specify where the file is located, so the web page can include the code and execute it.

Ex: `<script src="index.js"></script>`

Consider adding your javascript files at the end of the html source code, but inside the `body` tag, so in case any error is present, your html code will still be rendered by the browser and users don't just see a blank screen.

Adding the javascript file at the end of the html content:
```html
<!DOCTYPE html>
<html>
    <head>...</head>
    <body>
        ...
        <script src="index.js"></script>
    </body>
</html>
```

You could also include the JavaScript code into your html file (which is not recommended for large websites) by using the same `script` tags, ommiting the `src` attribute, and placing the code in between the tags.
Ex: Use of `script` tags inside html doc
```html
<head>
    <script>
        // JavaScript code goes in here
        console.log("Hello World");
    </script>
</head>
```

It is recommended that you use an external file for your JavaScript code.\
It will not only help you reduce the content on your html file, but it will also help you to organize the files of your web in a better way.\
Also, consider that if you need to use the same script for multiple web pages, instead of copying the code, you can link all those html files to a single javascript file.\
This way, you can perform changes in a better and organized way.

## Code format
There is something called `code format`.\
First, you must know that it has nothing to do with the computer, but with humans and their capability to read/understand the code.

There are some recommendations that you must follow, in order to make your code easy to read / understand / maintain.\
Otherwise, it won't happen anything with the computer, but you and the developers that are working with the files, may waste a lot of time.

These recommendations are nothing but conventions used by developers around the world to keep the code in armony so almost anyone can easily read and work with the code you wrote.

### Indentation
The code you will write, will include something know as a `block of code`, which can be identified by being placed between curly braces.\
A function uses a block of code to define what it will do, and depending on the complexity of the code that you are writting, it is important to set a way to specify that a block of code has started, or in the other hand, just ended.

In order to do this, you will use what is called `indentation`.\
Once a block of code starts, you can use either a tab, or a set of spaces to identify that block\
When the block ends, you must remove that additional spaces for upcoming lines of code.

Ex: Use of indentation.
```js
function sayHello( name ){
    // As you can see, the code inside the function, has
    // some additional space at the beggining of the line.
    // This is to specify that it is a new block of code!
    console.log(`Hello back ${name}!!`);
}

sayHello("BkRqbbit");
```

If you don't use indentation, it might be a bit hard to understand the code in general.\
It is important to consider that the computer does not care at all of the extra spaces we add, if we don't make syntax errors.

Ex: Code with no indentation
```js
function sayHello(name){console.log(`Hello back ${name}!!`)}; sayHello("BkRqbbit");
```

## Console log
You can use the instruction `console.log()` to display any string that you want in the dev tools of the browser.

Ex:
```js
console.log("Hello, World!");
```

## Alert
You can use the instruction `window.alert()` to display a pop up alert.\
You can add any message / string that you want.

Ex:
```js
window.alert("Hello, World!");
```

## Comments
Comments in JavaScript are intended to be notes to the person reading the code.\
It can be you, a member of your team, or any person around the world that may have access to the source code.

Comments will produce no visual or modification results.\
In fact, browsers will just ignore comments in the code you write.\
It means that you can write anything that you want.\
Event if it breaks javascript syntax rules.

There are two types of comments:
- single line comment
- multi line comment

Each time you want to add a single line comment, use `//` at the beginning of the line, everything that goes after it, is considered as a comment.

To declare a multi-line comment, use `/*` at the beginning of the comment, and add `*/` at the end of the comment.

Example of single line comment:
```js
// This is a single line comment
// Here is another single line comment
```

Example of multi-line comment
```js
/*
    This is a multi-line comment
    You can use this to add large pieces of text to your code
    With no worry of creating hundreds of single line comments!
*/
```

## Variables
A variable in programming is like a container that stores some information that can be used later in the program.\
A benefit of using variables is that we can use meaningfull names instead of fixed numbers that can be confusing to other people

There are two steps to create a variable:
- Declaration
- Assignment

When we declare a variable, we are telling the computer to reserve some memory to store our data in there.\
The moment we assign our variable, we are telling what to store in that memory space.

One of the biggest benefits of variables, is that the value they store can be change any time you want while the code in being executed.\
Consider that without variables, our programs would behave exactly the same after each iteration!\
Variables allow our programs to work with different data and perform different operations, depending on each case they are working with.

### Declaring variables
The first time you create a variable, you declare it.\
Which means, you let your program know that you want to store some data, and what name (identifier) you will use to refer to it.

While declaring a variable you can also assign the value, or in case you don't know what value will be stored, just left it empty.\
Both options are possible!

To declare a new variable, you must use a special keyword to give the instruction to the JavaScript program to reserve some memory space for your variable.\
The keywords you can use, are `let`, `var`, y `const`.

The definition of a variable consist of three parts.\
These are: `keyword`, `name`, and `value`.\
`let age = 18; // As an example`

To declare a variable, we need to use the keyword and a unique name.\
Ex: `let age;`

To assign a variable, we must use the equals symbol `=` and then the value to store.\
Ex: `age = 18;`

Now to print the value of the variable, we can do it as follows:\
`console.log( age );`\

You can do both declaration and assignment in case you know what the value to store is:\
`let age = 18;`

But if you don't actually know what the value to store is, you can declare the variable, and assign a value to it later in the program!

### Diference between var, let, and const
There are different keywords to declare a variable.\
Each one of them offer different characteristics that can be used, depending on the needs of our program.\
That's why it is important to know how they work, and choose the one that fits better our needs.

One of the first differences is that both `let` and `var` are used for variables that might change their value somewhere in the future.

Now, the difference between `var` and `let`, is that `var` has a global scope, meanwhile `let` has a block scope.\
Which means that the variables declared using the `var` keyword, can be used all along the javascript file, while the `let` variables can be used only in the block of code they have been created in.

## Arithmetic Operators
Arithmetic Operations allows us to perform mathematical calculations if needed.\
It is useful to manipulate the information that our program is intended to handle.\
They are useful in case we want to work with variables, modify their values, perform calculations, or compare their values.

It is important to keep in mind the following concepts:
- Operands (values, variables, etc)
- Operators (+, -, *, /)

### Addition
The addition operator allows us to add a value to another value.\
Ex: `students = 30 + 1`

The `addition` operation uses the `+` symbol.\
But you must keep in mind, that if you use this symbol with strings, you will concatenate them!

Ex: String concatenation
```js
let first_name = "Bk";
let last_name = "Rqbbit";
let full_name = first_name + last_name;

console.log("Your full name is: " + full_name);
```

Adding numbers and strings, lead to different results.

### Substraction
The substraction symbol is represented by the following symbol: `-`\
It is used to reduce a value from another value.\
Ex: `students = students - 5;`

### Multiplication
The multiplication operation is represented by the following symbol: `*`\
It performs a multiplication between the numbers `x` and `y`.\
Ex: `let result = 5 * 8;`

### Division
The division operation will be represented with the following symbol: `/`\
It performs a division between `x` and `y` numbers.\
Ex: `let result = 10 / 2;`

### Exponents
The operation of exponents is represented with the following symbols: `**`\
The first value is the base, and the second is the exponent.\
Let's say, the following operation `2 ** 3` is equals to 8.

### Modulo
The modulo operation is represented by the following symbol: `%`.\
It is the reminder of any division you calculate.\
Ex: `let result = 11 % 5;`

### Augmented assignment operators
When you have a variable value and want to update it using arithmetic operators, you must do something like this:\
```js
    let students = 30;
    students = students + 10;
```

The problem with it is that it can be a little tedious to write the variable name multiple times, so that's why augmented assignment operators exist!

You can write the previous code, as follows:\
```js
    let students = 30;
    students += 10;
```

At the beginning it can be tricky to understand, but when you have some practice, it will become faster to write and understand what it does!

Keep in mind that this work with all the previous operators!

```js
    let students = 30;

    students += 10;
    students -= 10;
    students *= 2;
    students /= 2;
    students %= 2;
    students **= 2;
```

### Increase and decrease a variable value
There is a shorter way to increase / decrease the value of a variable by 1\
Keep in mind that it only works by one, in case you want to use another value, use the previous method seen.

```js
    // Increase
    let age = 18;
    age++;
```

```js
    // Decrease
    let age = 18;
    age--;
```

You can use it as a prefix, or postfix\
The prefix goes before the variable name (++age).\
The postfix goes after the variable name (age++).

It works exactly the same way, with the difference that when you are performing complex operations, how you position this operand is important!\

Operand as a prefix: Increase the value, and returns it.\
You can work directly with the new modified value.

Operand as a postfix: First return the value, and then increase it!\
This means you first work with the pre-modified version, and then it is increased.

```js
    // As this will first increase the value and the perform the 
    // comparation, age is now 18 so you are allowed!
    let age = 17;

    if( ++age >= 18 ){
        console.log(`Hello, you are ${age} years old!`);
    }
```

```js
    // Now, if we use it as a postfix operator, the condition will not be true.
    let age = 17;

    if( age++ >= 18 ){
        console.log("This message won't be displayed!");
    }
    else{
        console.log("You used a postfix operator!");
    }
```

### Operator precedence
There will be times where we have a set of complex operations, and knowing exactly how they will be executed, will prevent unexpected behaviours.

Operator precedence:
- Parenthesis ()
- Exponents **
- Multiplication, division, and modulo *, /, %
- Addition, Substraction +, -

Also, keep in mind that the operations will be performed from left, to right!

```js
    let result = (5 + 7)/2;
    // Here, based on the precedence, you can say that the operation that 
    // contains parenthesis will be solved first, and replaced by the result.
    // (5 + 7) = 12
    // Now the operation looks like this: 12 / 2 
    // Finally, 12/ 2 = 6;
```

This theory is not that complicated, but it is recommended that you practice with different operations by writing them on a paper and solving them considering the precedence table shown above.\
Then you can execute the code and see if you get the same result.\
Do this until you feel confortable with the arithmetical operations and their precedence.

## User input
Most of the time, the data that our program will work with, we dont actually know what it is.\
It will depend on the user, the type of information they want to be processed, so it's a good idea to know how to get user data!

### window.prompt()
This method allows you to create a pop up to display a message to the user.\
Also, allowing the user to input some data.\
That data can be stored using variables, and then manipulated!

Be aware when using this method to read numbers!\
This function will return a string, and may cause unexpected errors!\
To convert a string to a number, add `Number()` and that's it.\
Ex: `let x = Number(window.prompt("Enter the value of x: "));`

To validate the previous statement, you can execute the following code
```js
    let username = window.prompt("Enter your username: ");
    console.log( typeof username );
```

The code will print `string` on the console.\
Which means, no matter what you put in there, it will be considered a string!

## getElementById
The `getElementById` method, returns an object representing the html element that matches the `id` specified.\
Ids are required to be unique, it is useful when you want to access to a specific element of your web page.

Ex: Selecting an element by id\
`getElementById(id);`\
`getElementById("wrapper");`

You must be aware of writing the name of the method correctly.\
It is case sensitive and if you write it wrong, it won't work properly.\
You text editor or IDE must help you in case it has syntax suggestion features.\
But if it is not the case, pay attention to it.

The way you write the id of the html element you want to select, must be writen correclty (it is case sensitive as well), so doint it incorrectly may result in the code not working, or generating unexpected results.

If the html element was not found (id does not exist, or it was writen incorrectly), the method will return `null`.\
Otherwise it will return an element object. 

Another crucial point to keep in mind, is that in order to access the element, it must be present into the document.\
It means that if the element is dynamically added, it must be created first in order to access it, otherwise it will return a null value.

## Primitive data types
First of all, you must consider that javascript is a loosely typed language.\
This means that you don't need to specify to the browser the type of data you want to store inside the variable.\
The language determines the type of the value it stores, by the value per se.

Let's say you write the following code:\
`let age = 20;`

This will create a variable named `age` which stores the value 20.\
If you want to know the type of the variable, javascript will check, and as the content is a numeric value, it will thell you that the type is `Number`.

JavaScript uses the following data types:
- String
- Number
- BigInt
- Boolean
- Symbol
- undefined
- null

### String
A string data type is used to store a text value.\
A string is considered to be a sequence of characters.

There are different ways in which you can declare an array:
- Double quotes
- Single quotes
- Backticks

```js
// Creating of a string variable.

// Using double quotes
let name = "BkRqbbit";

// Using single quotes
let name = 'BkRqbbit';

// Using bacbtick
let name = `BkRqbbit`;
```

Consider that using backticks is actually a special way in which you can use variables.\
Use the following format:
```js
let name = "BkRqbbit";
let message = `Welcome back ${name}!`;
```

Note: using backticks and variables, will replace them with the value they store, it is a practical way you can use, depending on your needs!\
To add the variable's value, you must use the syntax `${variable_name}`.\
So, if you have a variable called `name` that stores the string `JavaScript`, you could do something like this:\
```js
let name = "JavaScript";
let message = `You must learn ${language}!!!`;

console.log(message);
// prints: You must learn JavaScript!!!
```

You can use double or single quotes characters to declare your string variables, depending on your style, or if the project has already choosen one.\
You must know that you can use one inside of the other!\
Let's say you choose to use double quotes, you can write the following code with no problem!:\
`let message = "Let's go!!!";`\

#### Escape characters
The `escape character` is the backslash.\
It is used to tell JavaScript: "Don't take the next character, as you normally would".\
This will allow us to use some special characters, that otherwise would not be possible due to the language characteristics.

To use the `escape character`, you must use the backslash, followed by the character you want to use.\
Ex: Using the backslash
```js
let message = "Hello! What's your name? Is it \"Mike\"?";

console.log(message);
// The previous code must be executed with no problem.
// The backslash allows us to use double quotes more than once!
```

You can also use the `escape character` to add a break line!\
By using the `\n` combination, you will create a new line.\
Ex: new line
```js
let str = "This is one line. \nAnd this is the other!!!";

console.log(str);
/*
    prints:
    This is one line
    And this is the other!!!
*/
```

### Number
The `Number` data type is used to store numeric values.

In other programming languages, there are different types of numbers, and when declared, they must be specified which one we want to use.\
But in javascript there is only one data type which stores them all.

The `Number` data type can represent integers, decimals, exponentials, octal, hexadecimal, and binary numbers.\
Ex: Different type of numbers
```js
let int_number = 1;
let dec_number = 1.5;
let exp_number = 1.4e15;
let oct_number = 0o10;
let hex_number = 0x3E8;
let bin_number = 0b101;
```

### BigInt
The `Number` data type does have a huge capability to store big and small numbers, but in case you need to work with even bigger / slower numbers, you have the option to use a `BigInt`.

The `BigInt` data type can be recognized by using the postfix `n`.\
Ex: Creating a `BitInt` variable.
```js
let big_number = 90071992547409920n;

console.log(`The big number is ${big_number}`);
```

You must keep in mind that in order to perform operations with the `BigInt` data type, all the numbers involved must be `BigInt` values.\
Otherwise, you will get an error indicating that.\
To do so, you can use `type convertion`.

### Boolean
The `Boolean` value can hold two values: `true` and `false`.
```js
let user_online = false;
console(`User online: ${user_online}`);
```

This data type is used to take desicions on our programs\
You can also perform boolean operations.

`Boolean` values are commonly used to determine the state of a thing.\
It can be on / off.

### Symbol
This is a relatively new data type.

The `Symbol` data type can be used when it is important that variable values are not equal, even if their value and content are the same.

Ex: Comparing strings and symbol variables.
```js
let msg_1 = "JavaScript is fun!";
let msg_2 = "JavaScript is fun!";
console.log("These two strings are the same: " + msg_1 === msg_2);
// Here the output is true

let str_1 = Symbol("JavaScript is fun!");
let str_2 = Symbol("JavaScript is fun!");
console.log("These two Symbols are the same: " + str_1 === str_2);
// Here the output is false
```

### Undefined
JavaScript has a special data type for a variable that has not been  assigned a value.

Ex: Undefined variable value
```js
let username;
console.log(username);
// Output: Undefined
```

We can also assign an undefined value to a variable.\
This is a bad practice.

### null
This is a special value that can be used for indicating that a variable is empty, or that the value is unknown.

When using it, consider that it is case sensitive, so you must use it with lowercase letters.\
`let age = null;`

## typeof
The `typeof` keyword is used to indicate JavaScript that we want to know what is the data type of a variables content or a content itself.

To use it, you could use parenthesis, but they are not necessary.\
Ex: Usage of `typeof` with and without parenthesis.
```js
let age = 20;
let var_type = typeof age;
let var_type2 = typeof(age);
console.log(var_type);
console.log(var_type2);
// Both variables will print: Number
```

## Type convertion
The variables in JavaScript have the ability to change their type.\
You must be aware, because sometimes the language will do it automatically, and would result in unexpected / wrong results.\
JavaScript won't throw an error as any other language would, instead it will try to convert one data type to another, in order to perform the operation specified, with no previous warning!

You must prevent the language from performing data convertions.\
You don't know what it will do, and what will be the result.\
JavaScript does have built-in functions that allows you to perform data type convertion, so you can not rely on the languages ability the perform the cast itself.

The language offers you: `String()`, `Number()`, and `Boolean()`.\
The `String()` method will take any value, and convert it into a string, just by putting double quoutes around the content we use.\
The `Number()` method will try to convert the specified data into a Number, in case it is not possible, the result will be `NaN`.\
The `Boolean()` method will convert everything to true, except for `null`, `undefined`, `0`, `""` (empty string), and `NaN`.

It is the process of converting the data type of a value, to another data type.\
It is useful when we want to manipulate some data our program stores.

For example, when we read user input, data is stored as string.\
So if we read a number, we cannot apply the corresponding operations and unexpected results might appear.

We can convert any value from a type to another.\
string, numbers, booleans, etc.

## Comparison Operators
The outcome of the `comparison operators` is always a `Boolean` value.

### Equal
There are two `equal` `comparison operators`.\
The first (`==`) just compares that the data is equal.\
The second (`===`) compares the value, and the data type.

Ex: Different type, but same value
```js
let x = 5;
let y = "5";

console.log( x == y );
// True!
// Same value

console.log( x === y );
// False
// Same value, but different data type
```

You must be aware of both comparison operators.\
Using the wrong one for an important operating may lead to unexpected results / behaviours of our program application.\
And depending on the severity of our program, it might bring several consequences.

### Not Equal
This operator is similar to the `equal` operator, but it does exactly the opposite!\
This operator will check that the values are different (not equal).

If both arguments are equal, it returns false.\
If both arguments are different, it returns true.

To use the `not equal` operator, you use the following combination: `!=`.

Here also exist the normal comparison, and the strict comparison.\
If you use `!=` the program will only compare the values.\
If you use `!==` the program will compare the values, and data types.

### Greater than and smaller than
The greater operator returns true, if the right operand is greater that the left one.\
The smaller operator returns true if the right operand is smaller than the left one.

We can use the `>` character as the greater operator.\
We can use the `<` character as the lower operator.

Ex: Use of both operators
```js
let x = 1;
let y = 3;

// Greater operator
console.log(y > x);

// Smaller operator
console.log(x < y);
```

There's also the operands `greater than or equal` and `smaller than or equal`.\
They work exactly the same, but they include the case where both values are the same, and not explicitely greater or smaller.

Ex: Using greater than or equal operator.
```js
let x = 5;
let y = 5;

console.log(x > y); // False
console.log(x >= y); // True
```

## Logical Operators
### And
The operator `and` allows us to combine two conditions as one.\
This operator will return `true` only if both conditions are true, otherwise, it will return `false.\
To use the `and` operator, you must use the `&&` symbols between the two expressions to be evaluated.\

The format you must use, is as follows:
`(condition 1) && (condition 2)`

Ex: Use of the `and` operator:
```js
let age = 20;
let name = "BkRqbbit";

if( age >== 18 && name === "BkRqbbit" ){
    console.log("Welcome back, sir!");
}
```

### Or
Now, if you have a situation where you want to execute a block of code that depends on two conditions, but you only require one of them to be true, you can use the `or` operator.\
To use it, you use the following character combination: `||`.

When both expressions are false, it will return false.

### Not
There will be some situations in which you would like to negate a boolean value.\
You can do it by using the `not` operator, which can be used with the `!` character.

Ex: Using the `not` operator.
```js
let user_online = false;

if( !user_online ){
    console.log("The user is not online!");
}
```

This operator will flip the value of a boolean.\
If your boolean is true, it will return false.\
If your boolean is false, it will return true.

## Objects
Primitive data types are the basics of the language.\
So in order to be able to build more complex systems, you might know how to use multi-store objects.\
An object allows you to manipulate and store multiple values.

An object, is a collection of properties and methods.\
Properties are the variables the object has access to.\
And methods are the functions the object can execute.\
An object will allow you to build even more complex data types.\
You can just use variables, or other objects!

One fancy thing about objects, is that they allow you to represent things of the real world.\
Think of a dog, you can create a `dog` object.\
Its properties can be: weight, name, color, breed.\

## Arrays
An array is an object type, that allows you to store multiple values and access them with a single identifier.\
You can think of an array as a list of items!\
Think for example on the list of items to buy at the super market.

An array can store different data type values.\
The values it store, won't be parsed into a different data type.\
So you don't need to worry about unexpected behaviours.
The more you expose to different coding problems, you will be in need of more complex solutions, such as arrays!

### Creating an array
To create an array, you must use the following structure:
```js
let colors = ["Black", "White", "Red", "Blue"];
```

Ex: User info stored into an array
```js
let user_data = ["BkRqbbit", 23, true];
console.log(`The user ${user_data[0]} is ${user_data[1]} years old, and is online: ${user_data[2]}`);
// Output: The user BkRqbbit is 23 years old, and is online: true
```

To access the elements of an array, you must reference the index of the element.\
To do this, you must use square brackets and the index number as follows:
```js
let names = ["BkRqbbit", "White", "Mistical"];
console.log(names[0]);
// Output: BkRqbbit
```

### Access  its elements
We don't need to specify the index number when creating the array.\
The array itself will give each element an index number.\
Consider the example of the list of things to buy!\
They go one item after the other, so we can say that the index number is not a random number.\
It will start on 0, and will go as long as the array is.

Consider that you can't use negative index values.\
They just don't exist!\
However, if you try to access a negative index value, you will get `undefined`.\
Same happens when you try to access a bigger index value than the array size!

### Overwrite
You can overwrite the value of an array by using its index!\
Check the following example:
```js
let cars = ["Toyota", "Volkswagen", "Nissan"];
console.log(cars);

cars[0] = "Tesla";
console.log(cars);
```

### lenght property
Arrays does have a built-in property that allows you to know the number of elements your array has.\
This property is the `lenght` property.

You can use it like this:
```js
let cars = ["Tesla", "Nissan", "Chevrolet", "Renault"];
let size = cars.length;
```

You must be careful when using the `length` property to access an element of the array.\
The index value will be one number less, and it can generate unexpected results.\
In case you want to access the last item of an array, you can do something like this:\
`let last_item = array.legth - 1;`

Ex: Access the last element of an array
```js
let colors = ["Black", "White", "Red", "Blue"];
let size = colors.legth;

console.log("The size of the array is: " + size); // Prints: 4
console.log("The last element of the array is: " + colors[size - 1]); // Prints: Blue
```

### push()
You can add new elements to an array using indices.\
However this is not recommended due to the facility to commit a mistake.\
You could add more than one single element, or overwrite an existing one.\
That is not the action we want to perform.

There is a special way to do this (the right way), that is using the `push()` method.\
Consider that the value, is added at the end of the array.

To use this method, you need to use the name of the array, a dot, and then the method itself.\
The value you want to add, goes in between the parenthesis of the method.

Ex: Adding a new item to the array using the push() method.
```js
let fruits = ["Mango", "Orange", "Lemon"];
fruits.push("Lime");
console.log(fruits);
// Output: Mango, Orange, Lemon, Lime
```

An interesting thing to keep in mind, is that the `push()` method does return the new size of the array!

### splice()
This method is used when you want to add a new element to an array, in a different position than the end.\
By using this method, you can specify the index you want to insert the new element.\
All the elements in the right, will be moved one place.

The `splice()` method uses multiple parameters.\
The first one, is the index where you want to start inserting a new element.\
The second one, is to specify the number of elements you want to delete from that point to the right.\
All the arguments that goes after these two, are the values we want to insert.

Ex: Usage of the `splice()` method
```js
let shapes = ["Circle", "Square", "Rectangle"];
shapes.splice(1, 0, "Triangle");
console.log(shapes);
```

You must know that the `splice()` method can be used to delete elements from an array!\
To do this, just ommit the list of items to add.\
So, the `splice()` method just specifies the index where you want to start, and the number of elements to delete.

Ex: Usage of `splice()` to delete elements from an array:
```js
let numbers = [1, 2, 3, 4, 5];
console.log(numbers);

numbers.splice(0, 2);
console.log(numbers);
// Output: 3, 4,5
```

### concat()
The `concat()` method is used to add one array to other.\
It will create a new array, that is the concatenation of both previously specified arrays.\
You must know that the elements of the concatenated array, will be added at the end!

Ex: Usage of the `concat()` method.
```js
let colors_1 = ["Black", "White"];
let colors_2 = ["Red", "Blue"];
let colors = colors_1.concat(colors_2);

console.log(colors);
// Output: Black, White, Red, Blue
```

We can also use the `concat()` method to add one or multiple values to an existing array!\
Consider that all the values will be added at the end of it.

Ex: Using `concat()` to add values to an array
```js
colors = ["Black", "White"];
colors = colors.concat("Red", "Blue");
console.log(colors);
```

### pop()
The `pop()` method can be used to remove that last element of an array.

Ex: Usage of the `pop()` method
```js
let numbers = [1, 2, 3, 4, 5];
console.log(numbers);

numbers.pop();
console.log(numbers);
// Output: 1, 2, 3, 4
```

### shift()
The `shift()` method can be used to remove the first element of an array.\
It will cause that the left elements of the array, shift their positions by 1 element to the left (-1 to the indice).

Ex: Usage of the `shift()` method:
```js
let numbers = [1, 2, 3, 4, 5];
console.log(numbers);

numbers.shift();
console.log(numbers);
// Output: 2, 3, 4, 5
```

### find()
The `find()` method can be used to determine if an specific value is part of our array.\
This method will be executed at each item of the array until it finds the coincidence.\
In case the specified value is not found, it will return `undefined`.

Ex: Usage of the `find()` method.
```js
let numbers = [1, 2, 3, 4, 5];
let find = numbers.find(function(e){ return e === 5 });
console.log(find);
// If the value is found, return the value.
// Otherwise, the variable is empty
```

### indexOf()
There will be times were we don't only want to know that a value exist.\
We also want to know what is its index so we can manipulate it.

This method will return the index where the element was found.\
In case there is more than one match, the method will return only the first coincidence.\
In the other hand, if the value is not found, it will return -1.

Ex: Usage of the `indexOf()` array method.
```js
let numbers = [2, 4, 6, 8, 10];
let position = numbers.indexOf(2);
console.log(`The position of the value 2 is at index: ${position}`);
// Output: 0
```

You must know that you can use a second argument.\
This is the `startAt`, where you can specify the position you want to start looking for.\
This way allows you to find for a second or more coincidences.