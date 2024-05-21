# CSS
Web developers use CSS to separate the styles of a site, from the information on the web.\
CSS can be used to configure the styles of your web, like text, color, and page layout.

The appearance of the website can change dramatically, depending on the css rules you apply to html elements.\
You can change both styles and the structure of the web as you like.

You must be aware that CSS is still in development, so new things are added.\
Those new features might not be supported by all the browsers, so to prevent unexpected behaviours of your web, you must take your precautions.

One of the big advantages of CSS, is that you can control the styles of multiple html documents, with a single css file.\
In case that you would like to modify the same style for different web pages, you can modify a single css file, instead of multiple html files.\
That way you avoid wasting unnecesary time, and you are more effective on your work.

There are four ways you can implement the use of CSS in your web page!
- inline
- embedded
- external
- imported

The inline styles are coded in the body of the web page.\
The styles are added to each tag as an attribute `style`.\
You must know that the style only applies to the element you added the attribute.\
And that this way of adding styles, is not recommended.

The embedded styles (also known as internal styles), are defined within the head section.\
You must use the tag `style` to define the styles of your web document.\
All the css rules are only applied to those elements inside the html document.

External styles are coded in a completely separate file. (.css extension)\
You can link your html document with css styles by using the `link` tag inside the head section.\
This style sheet can be linked (applied) to as many html documents as you want.

## Selectors
Each style rule is divided into two main parts: selector and declaration.\
Selectors are used to specify to the browser the element that we want to modify!

The selector can be an HTML element name, a class name, or an id name.\
The more you learn about CSS, you will find that there are more complex selectors that can be used for specific actions.

You can apply CSS rules to multiple selectors at the same time.\
Just place a comma between them, and the magic will happen\
`h1, h2, h3 {...}`

### Class Selector
You can use a class selector in css when you need to apply the same css rule to multiple elements, that are not necessarily the same html element, for example, just style paragraphs.\
Or you can use this to style a couple of html elements, and not all of them!

When you style a class, use the class-name as the selector.\
To indicate to CSS that you are styling a class, use a dot before the name of the class, as follows:\
`.class-name{...}`

Good thing, is that a class can be added to any element, so your styles too.\
Just make sure that the element is compatible!

### Id Selector
First, keep in mind that html rules that each id must be unique.\
This means that an id is just for a single html element on the hole page.

So you can use the `id` selector to apply css styles to a single element.

To indicate to CSS that you are using an id as a selector, you must place the symbol `hash` (#) before the name of the id.\
`#id-name{...}`

## Declarations
Style sheets files are composed of style rules that describe the styles to apply and the element to modify.

The declaration indicates the CSS property to apply, and the value we want to use.\
The structure is as follows: `property: value;`

When you want to add multiple rules to a single selector, you can do it by using the semicolon character (;)

```css
body{
    background-color: aqua;
    color: red;
}
```

## CSS Properties

### background-color
The `background-color` property configures the background color of the element we specify.

```css
body{
    background-color: yellow;
}
```

### color
The `color` property of CSS allows you to change the text color of an html element.

```css
body{
    color: white;
}
```

### font-family
The `font-family` property is used to change the typography used on your website.

A web browser displays the text using the fonts that have been installed on the user's computer.\
It can be a problem when you have a custom web page, and the font that you want to use is not installed on the user's computer, because another font will be used which can create unexpected errors.

To prevent this from happen, you can create a back up plan.\
That is to add a list of fonts to use, if the first is not available, the browser will try with the second one.

There will be occasions when the name of a font will be more than a single word, that means it will include spaces.\
If you just add it, CSS will think it is a list of different fonts that does not exist (or could).\
To add the name of a font with spaces, try using quotation marks as follows: `body{font-family: "Times New Roman";}`

Using special fonts for your web page could be problematic, and forced for many years to web designers to use general fonts, until CSS3 added a feature that solved that problem!\
That is the `@font-face` feature.

To use this feature, you must provide the URL of the font file, here an example that you can use!\ 
```css
@font-face{
    font-family: MyAwesomeFont;
    src: url(myAwesomeFont.woff) format("woff");
}
```

After using the previous rule on your CSS document, you can now add the specified font to your html elements as any other font you might been using.\
```css
body{
    font-family: MyAwesomeFont;
}
``` 


```css
body{
    font-family: monospace;
}
```

### font-size
The `font-size` property allows you to change the size of the text inside the html element that you use as a selector.

```css
body{
    font-size: 10px;
}
```