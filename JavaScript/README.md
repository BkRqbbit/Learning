# JavaScript
JavaScript is a programming language used to create dynamic and interactive web pages, in addition to HTML and CSS web technologies.

With this programming language we can add functionalities that respond to user actions, receive and transform user input data, depending on the purpose of our site.

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