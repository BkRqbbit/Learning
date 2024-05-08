# HTML
HTML stands for HyperText Markup Language.\
It is used to structure the content of a web page.

HTML uses tags to specify different instruction to the browser.

A tag starts with the `<` simbol, and ends with the `>` simbol.\
The name of the tag goes in between, ex: `<tag>`

There are two types of tags in html:
- Self-closing tags
- Paired tags

A paired tag has an opening tag, and a closing one.\
The opening tag, follows the following structure: `<tag>`\
While the closing tag, has a slash at the beginning: `</tag>`\
The content of the tag goes in between both opening and closing tags\
Ex: `<tag>Content goes here</tag>`

The self-closing tag (also known as empty tag) just contains the opening tag\
It is characterized by not having a content.\
It is used to define data, or to add meta data to the web
Ex: `<tag>`

Keep in mind that if you don't use tags properly, or don't use them at all, the browser might still show the data to the user in screen, but depending on the complexity of the site, it might not work as expected.\
Search engines can punish you for not doing it correctly.

## Basic concepts

### Internet
People has a concept of the internet that might seem more complicated than it really is.\
The internet is an interconnected network of computer networks.\
Which means, the internet is a concept, a way to connect all kind of devices all around the world with the purpose of sharing information between them and keep us connected with the rest of the world.

It has become part of our daily lives.\
Now you can find tools and services online that facilitate our day-to-day lives.\
Even business have moved to the online world.

Not being connected to the internet could be equal to being disconnected from todays world.\
With this fast-changing environment, would be almost impossible to keep track of everything that happens in the world.

## Pre-requisite tools
There is a tool set that you must have installed on your device to sucessfully write HTML source code and visualize it correctly.

You just need 2 software programs:
- Web browser
- Text editor

There are a wide variety of option you can choose for a web browser, and the text editor, so you can choose the one that you prefer.

Keep it mind that it is recommended that you use a modern and popular web browser.\
They offer support for new features of technologies like html.

As you can see the requisites are not complicated and almost every coputer must have software that you can use to work with html, with no complicated configurations, memberships, etc.

## First webpage
The source code is provided here, with proper explanation about what each element does.

### Source code
```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>First html web page</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h1>Hello world</h1>
        <p>My first web page made with html5!</p>
    </body>
</html>
```

### Directory / Folder
Web servers use folders to organize the structure of their web site.\
The more familiar you get to this way of organization, the better you can work for future projects.

The name you use for folders is up to you.\
You don't need to use a specific name, or structure.\
Just use a structure that you can understan and manage.

Ex: `/home/bkrqbbit/html/`

### Create a new file
First thing you must keep in mind, is that html elements must have the `.html` format / extension.\
This will allow the web browser and other software technologies to identify it as what it is (webpage doc).

Also, most web browser will handle the `index` file as the main web page document.\
This can change from server to server, depending on the configuration that was set, but it is a convention that you must follow.

Now, you must create the `index.html` file, and open it with your favourite text editor.

### Define html version
The first line of a html document, must be used to specify the version of the language we want the browser to use to render our source file.\
It is important because each html version has support for different features, and if not specified, the file cannot be rendered properly.

In html5 you can use the following line:\
`<!DOCTYPE html>`

### HTML source code
After the html version, you must define the `<html></html>` tag.\
It indicates to the browser, that everything inside this tag, must be handled as html source code.

Consider that tags are used to add meaning to the content, in such way web browser and other software technologies can understand.\
So it's recommended that you learn what each html tag does, and use them properly.

You can specify the language the web was writen for by using the `lang` attribute.\
Ex: `<html lang="en">...</html>`

### Head section
This section goes inside the `html` tag.\
It is used to define all the meta data required by search engines, add style sheets, and external files.

Consider that all the information that goes here, is not displayed to the user.

`<head>...</head>`

#### Title
The title is used to set the title of the web page.\
It will appear at the top of the browser.\
Also when the window is minimized, the information will be shown.\
And is used when you bookmark a site.

`<title>...</title>`

#### Character set
As you may know, each language that exists around the world, has its unique characters to write.\
Each country may have support for the different characters.

If you try to render some content of other contry, you may experience some problems.\
This is exactly what will happen with a website, depending on the country.\
You can specify to the browser what character set to use, or in other words, what languages it will prioritize.

You can use the `<meta>` tag to do this.\
Use the attribute `charset` to specify to character set to use.\

It is recommended that you use the `utf-8` charset.\
It offers support for most languages around the world.

### Body section
This section goes inside the `html` tag.\
It is used to define the content that will be displayed to the user.

`<body>...</body>`

#### Heading
You can add headings (titles) in html.\
Use the `<h1>...</h1>` tag

#### Paragraphs
You can add paragraphs with the `<p>...</p>`

## HTML Elements

### Headings
When you use the heading elements in your html code, browsers will add some default styles, but you must not pay attention to them.\
The goal of html elements is not to add styles, but to format the content in a way software technologies does understand to optimize them and offer a better user experience while surfing on the web.

Later on you can customize the styles of each html element as you want.\
That's where you must use CSS!

Heading elements are used as titles\
Consider that each one of them has a level of 'importance'.\
h1 is the higher, and h6 is the lower one.

Headings goes from h1 to h6.\
Any heading element that goes outside that range, will not be properly displayed, and not considered by browsers while adding meaning to your html web content.

To add a heading to your website content, use the following tag:\
`<h1>Heading</h1>`