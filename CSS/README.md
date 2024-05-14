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

## Declarations
Style sheets files are composed of style rules that describe the styles to apply and the element to modify.

The declaration indicates the CSS property to apply, and the value we want to use.\
The structure is as follows: `property: value;`

## CSS Properties

### background-color
The `background-color` property configures the background color of the element we specify.

```css
body{
    background-color: yellow;
}
```