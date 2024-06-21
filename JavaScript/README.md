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

To declare a variable, we need to use the keyword and a unique name.\
Ex: `let age;`

To assign a variable, we must use the equals symbol `=` and then the value to store.\
Ex: `age = 18;`

Now to print the value of the variable, we can do it as follows:\
`console.log( age );`\

You can do both declaration and assignment in case you know what the value to store is:\
`let age = 18;`

But if you don't actually know what the value to store is, you can declare the variable, and assign a value to it later in the program!

## Arithmetic Operators
Arithmetic Operations allows us to perform mathematical calculations if needed.\
It is useful to manipulate the information that our program is intended to handle.

It is important to keep in mind the following concepts:
- Operands (values, variables, etc)
- Operators (+, -, *, /)

### Addition
The addition operator allows us to add a value to another value.\
Ex: `students = 30 + 1`

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

## Type convertion
It is the process of converting the data type of a value, to another data type.\
It is useful when we want to manipulate some data our program stores.

For example, when we read user input, data is stored as string.\
So if we read a number, we cannot apply the corresponding operations and unexpected results might appear.

We can convert any value from a type to another.\
string, numbers, booleans, etc.