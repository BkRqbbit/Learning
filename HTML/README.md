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
First of all, you need to know that html files, must have the `.html` or `.htm` extension.

To have a good structure of your files in your computer, you must create a folder where you will store all your html files.\
It is a good practice to practice from the beginning.\
It is the way servers store our files in the cloud!

In order to create your first web page, you must create a file with the `.html` extension.\
This file might have any name you want.

By convention, the main file is called `index.html`\
You can follow this convention to keep practicing from the beginning and get used to it.

Practice: [First HTML web page](001-first-web-page/index.html)

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