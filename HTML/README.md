# HTML

## Pre-requisite tools
HTML is a markup language created to structure the content of a web page.\
There is a set of tools that you need to have installed on your computer to be able to build web pages using html.
- First one: web browser.
- Second one: Text editor

You can use almost any web browser and text editor.\
It is recommended that you use one of the most popular web browsers on the market, they follow the web recommendations, which garantees you as a web developer, that how you see your web page on that browser, will look equal or similar on other ones.\
Also consider that top browsers is what users use.

For the text editor, you can use the ones that are pre-installed on your computer operating system.\
Or you can do your research to find one that suits you best.\
There are a plenty of text editors and IDEs.\
Each one of them, will have different capabilities that will help you on your path as a web developer.

It is always recommended that you learn html using a basic text editor, just to get familiar with the sintax, and identify its elements.\
This process might be interrupted if you use an IDE with autocompletion feature.\
But, it is up to you!

## Create your first web page

### Considerations
First of all, you need to know that html files, must have the `.html` or `.htm` extension.

To have a good structure of your files in your computer, you must create a folder where you will store all your html files.\
It is a good practice to practice from the beginning.\
It is the way servers store our files in the cloud!

### Create the file
In order to create your first web page, you must create a file with the `.html` extension.\
This file might have any name you want.

By convention, the main file is called `index.html`\
You can follow this convention to keep practicing from the beginning and get used to it.

The `.html` extension will also help browsers to identify the type of file they are hadnling and how to do it properly.

### Specify HTML version
In HTML, the first line must be a tag that specifies the version of HTML we are using for the web page.\
This will help the browser to know how to properly render the content of the site.

The tag we must use for HTML5 (Latest version) is:\
`<!DOCTYPE html>`

### HTML content
There is a tag that we must include into each one of our HTML documents.\
The tag let the browser know that all the content within the tags, is just HTML elements.

The tag is:\
`<html>...</html>`

All of our HTML elements must be placed within the tags.\
Except for the previous one that specifies the version of html.

### Head section
The head section of our html web document contains all the meta-data that our page requires.\
All of the data that goes in here, is not visible for the user.\
The tags are used to specify some information to the browser.

To define the head section, we can use the following tag:\
`<head>...</head>`

### Body section
The body secstion is used to contain all the content of our web page.\
Here goes all the information that will be visible for the user.

To define the body section, we can use the following tag:\
`<body>...</body>`

### title
The title tag goes between the head section.\
It specifies the title that goes at the tob of the tab.\
This data is also used when the site is bookmarked.\
Or when the site is open, and the browser is minimized.

Title tag goes as follows:\
`<title>Title of the web</title`>

### character set
We can specify the browser what character set we want it to use.\
This will allow us to prevent errors while rendering the content of the page.

As you might know, there are a vast majority of languages around the world.\
Each country uses a different character set that allows them to use special characters, depending on their language.

There is one character set called `utf-8` that is universal.\
It would be great to use it, most of the time.

To add it to your web page, you can add the following line:\
`<meta charset="utf-8>`

### Heading
Headings are used to add titles to your web content.\
You can define a heading as follows:\
`<h1>Heading title</h1>`

Headings are meaningful for the browser.

### Paragraphs
We can add paragraphs of text with the help of the `<p></P>` tag!

### Example
To summarize all the previous content we saw, we can built a basic web page as follows:\
[First HTML web page](001-first-web-page/index.html)

## HTML Tags
An HTML tag starts with a `<`, and ends with a `>`.\
Within these two simbols, goes the name of the tag we want to use.\
`<tag_name>`

You must know that there are two types of tags:
- pair tags (opening and closing)
- empty tags (self-closing tags)

### Pair tags
Pair tags have an opening and a closing tag
- Opening tag: `<tag_name>`
- Closing tag: `</tag_name>`

Pair tags have contente that must be specified within them.\
`<tag_name> Content goes in here! </tag_name>`

If only the opening tag is specified, but you forgot about the closing one, it will produce unexpected results, so you must be aware of this.\
One way you can use to avoid this mistake, is to properly indent your code.

### Empty tags
This type of tag, doesn't require a closing tag.\
It does not have any content.

This tag is used to specify an element, or to add information to the web.

You can use an empty tag, as follows:\
`<tag_name>`

## HTML Elements

### Headings
To create a heading in HTML, we use the tag `h` followed by the level of the heading.\
For example, to create a heading of level 1, we must use the tag `h1`.\
Consider that headings in html do require an opening and a closing tag.\
`<h1>Heading title</h1>`

The levels of headings you can use, goes from level 1, up to level 6.\
Also keep in mind, that the heading with more priority / power, is level 1.\
So the order goes from top to lower: h1, h2, h3, h4, h5, h6.

HTML headings will be styled by the browser, but you must not use headings to style your content.\
There's a technology used for styling, called CSS that you must study later. 

Headings are used as titles of the content.\
You can use them to categorize the web page content.\
They have an important use for search engines to know what your site is about.\
Also screen readers might use them to give an overview to the user.\
So its correct usage must be a priority for you when structuring a web page.